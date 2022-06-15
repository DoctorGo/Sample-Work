import numpy as np
import math
import random
import operator
from sys import maxsize
from itertools import permutations
from collections import defaultdict
import networkx as nx
import matplotlib.pyplot as plt
import pandas as pd

#project5

class Path:
    
    def __init__(self , order, weight):
        self.order = order
        self.weight = weight
 
class City:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def distance(self, city):
        xDis = abs(self.x - city.x)
        yDis = abs(self.y - city.y)
        distance = np.sqrt((xDis ** 2) + (yDis ** 2))
        return distance
    
    def __repr__(self):
        return "(" + str(self.x) + "," + str(self.y) + ")"
    
class Fitness:
    def __init__(self, route):
        self.route = route
        self.distance = 0
        self.fitness= 0.0
    
    def routeDistance(self):
        if self.distance ==0:
            pathDistance = 0
            for i in range(0, len(self.route)):
                fromCity = self.route[i]
                toCity = None
                if i + 1 < len(self.route):
                    toCity = self.route[i + 1]
                else:
                    toCity = self.route[0]
                pathDistance += fromCity.distance(toCity)
            self.distance = pathDistance
        return self.distance
    
    def routeFitness(self):
        if self.fitness == 0:
            self.fitness = 1 / float(self.routeDistance())
        return self.fitness       
        

# Open input file
infile = open('Random97.tsp', 'r')

# Read instance header
name = infile.readline().strip().split()[1] 
filetype = infile.readline().strip().split()[1] 
comment = infile.readline().strip().split()[1]
comment2 = infile.readline().strip().split()[1] 
dim = infile.readline().strip().split()[1]
EdgeWeightType = infile.readline().strip().split()[1]
temp = infile.readline()

# Read node list
nodelist = []
nodesleft = []
nodesplaced = []
BFSnodelist = []
DFSnodelist = []
N = int(dim)
arraysize = (N,N)
distances = np.zeros(arraysize)
nodecount=1
for i in range(0, N-1):  
    a,x,y = infile.readline().strip().split(' ')
    nodelist.append(City(x = float(x), y = float(y)))
    nodesleft.append(nodecount)
    nodecount+=1

# Close input file
infile.close()

def createDistanceTable (nodelist):
    
    for x in range(N-1):
        for y in range(N-1):
            X1 = nodelist[x][0]
            Y1 = nodelist[x][1]
            X2 = nodelist[y][0]
            Y2 = nodelist[y][1]
            value = math.sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2))
            distances[x,y] = value
            if (x == y):
                distances[x,y] = 0
    s = 0

def createRoute(nodelist):
    route = random.sample(nodelist, len(nodelist))
    return route

def initialPopulation(popSize, nodelist):
    population = []

    for i in range(0, popSize):
        population.append(createRoute(nodelist))
    return population
        
def rankRoutes(population):
    fitnessResults = {}
    for i in range(0,len(population)):
        fitnessResults[i] = Fitness(population[i]).routeFitness()
    return sorted(fitnessResults.items(),key = operator.itemgetter(1),reverse = True)
    
def selection(popRanked, eliteSize):
    selectionResults = []
    df = pd.DataFrame(np.array(popRanked), columns=["Index","Fitness"])
    df['cum_sum'] = df.Fitness.cumsum()
    df['cum_perc'] = 100*df.cum_sum/df.Fitness.sum()
    
    for i in range(0, eliteSize):
        selectionResults.append(popRanked[i][0])
    for i in range(0, len(popRanked) - eliteSize):
        pick = 100*random.random()
        for i in range(0, len(popRanked)):
            if pick <= df.iat[i,3]:
                selectionResults.append(popRanked[i][0])
                break
    return selectionResults

def matingPool(population, selectionResults):
    matingpool = []
    for i in range(0, len(selectionResults)):
        index = selectionResults[i]
        matingpool.append(population[index])
    return matingpool

def breed(parent1, parent2):
    child = []
    childP1 = []
    childP2 = []
    
    geneA = int(random.random() * len(parent1))
    geneB = int(random.random() * len(parent1))
    
    startGene = min(geneA, geneB)
    endGene = max(geneA, geneB)

    for i in range(startGene, endGene):
        childP1.append(parent1[i])
        
    childP2 = [item for item in parent2 if item not in childP1]

    child = childP1 + childP2
    return child

def breed2(parent1, parent2):
    child = []
    childP1 = []
    childP2 = []
    
    geneA = int(random.random() * len(parent1) / 2)
    geneB = int(random.random() * len(parent1) / 2)
    
    startGene = min(geneA, geneB)
    endGene = max(geneA, geneB)

    for i in range(startGene, endGene):
        childP1.append(parent1[i])
        
    childP2 = [item for item in parent2 if item not in childP1]

    child = childP1 + childP2
    return child

def breedPopulation(matingpool, eliteSize):
    children = []
    length = len(matingpool) - eliteSize
    pool = random.sample(matingpool, len(matingpool))

    for i in range(0,eliteSize):
        children.append(matingpool[i])
    
    for i in range(0, length):
        child = breed(pool[i], pool[len(matingpool)-i-1])
        children.append(child)
    return children

def breedPopulation2(matingpool, eliteSize):
    children = []
    length = len(matingpool) - eliteSize
    pool = random.sample(matingpool, len(matingpool))

    for i in range(0,eliteSize):
        children.append(matingpool[i])
    
    for i in range(0, length):
        child = breed2(pool[i], pool[len(matingpool)-i-1])
        children.append(child)
    return children

def mutate(individual, mutationRate):
    for swapped in range(len(individual)):
        if(random.random() < mutationRate):
            swapWith = int(random.random() * len(individual))
            
            city1 = individual[swapped]
            city2 = individual[swapWith]
            
            individual[swapped] = city2
            individual[swapWith] = city1
    return individual

def mutatePopulation(population, mutationRate):
    mutatedPop = []
    
    for ind in range(0, len(population)):
        mutatedInd = mutate(population[ind], mutationRate)
        mutatedPop.append(mutatedInd)
    return mutatedPop
#functions that breed and generate and mutate the next generation
def nextGeneration(currentGen, eliteSize, mutationRate):
    popRanked = rankRoutes(currentGen)
    selectionResults = selection(popRanked, eliteSize)
    matingpool = matingPool(currentGen, selectionResults)
    children = breedPopulation(matingpool,eliteSize)
    nextGeneration = mutatePopulation(children, mutationRate)
    return nextGeneration

def nextGeneration2(currentGen, eliteSize, mutationRate):
    popRanked = rankRoutes(currentGen)
    selectionResults = selection(popRanked, eliteSize)
    matingpool = matingPool(currentGen, selectionResults)
    children = breedPopulation2(matingpool,eliteSize)
    nextGeneration = mutatePopulation(children, mutationRate)
    return nextGeneration

def geneticAlgorithm(population, popSize, eliteSize, mutationRate, generations):
    pop = initialPopulation(popSize, population)
    intialDistance = rankRoutes(pop)
    
    print("Initial distance: " + str(1 / rankRoutes(pop)[0][1]))
    
    for i in range(0, generations):
        pop = nextGeneration(pop, mutationRate)
        
    distance = rankRoutes(pop)
    print(pop[0])
    print("Final distance: " + str(1 / rankRoutes(pop)[0][1]))
    bestRouteIndex = rankRoutes(pop)[0][0]
    bestRoute = pop[bestRouteIndex]
    return bestRoute

def geneticAlgorithmPlot(population, popSize, eliteSize, mutationRate, generations):
    pop = initialPopulation(popSize, population)
    progress = []
    progress.append(1 / rankRoutes(pop)[0][1])
    
    for i in range(0, generations):
        pop = nextGeneration(pop, eliteSize, mutationRate)
        progress.append(1 / rankRoutes(pop)[0][1])
    
    plt.plot(progress)
    plt.ylabel('Distance')
    plt.xlabel('Generation')
    plt.show()

#Plot 2 has the second breeding algo that has a smaller maximum which reduces
# differences between children and parents
def geneticAlgorithmPlot2(population, popSize, eliteSize, mutationRate, generations):
    pop = initialPopulation(popSize, population)
    progress = []
    progress.append(1 / rankRoutes(pop)[0][1])
    
    for i in range(0, generations):
        pop = nextGeneration2(pop, eliteSize, mutationRate)
        progress.append(1 / rankRoutes(pop)[0][1])
    
    plt.plot(progress)
    plt.ylabel('Distance')
    plt.xlabel('Generation')
    plt.show()
    

def calculateDistances(order):
    current_pathweight = 0
    x=0
    y=1
    for i in range(len(order)-1):
        temp1 = order[x]
        temp2 = order[y]      
        current_pathweight +=  distances[temp1-1][temp2-1]
        x+=1
        y+=1
    return current_pathweight

        
# Driver Code
if __name__ == "__main__":
#genericAlgorithmPlot() will plot the data using crossover 1
#geneticAlgorithmPlot2() will plot the data using crossover 2
    geneticAlgorithmPlot(population=nodelist, popSize=100, eliteSize=4, mutationRate=0.0001, generations=700)

    
    
    
    
   








