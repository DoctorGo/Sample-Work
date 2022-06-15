import numpy as np
import math
from sys import maxsize
from itertools import permutations
from collections import defaultdict

class Graph:
    
    def __init__(self):
 
        # default dictionary to store graph
        self.graph = defaultdict(list)
 
    # function to add an edge to graph
    def addEdge(self,u,v):
        self.graph[u].append(v)
 
    # Function to print a BFS of graph
    def BFS(self, s):
 
        # Mark all the vertices as not visited
        visited = [False] * (max(self.graph) + 2)
 
        # Create a queue for BFS
        queue = []
 
        # Mark the source node as
        # visited and enqueue it
        queue.append(s)
        visited[s] = True
 
        while queue:
 
            # Dequeue a vertex from
            # queue and print it
            s = queue.pop(0)
            BFSnodelist.append(s)
 
            # Get all adjacent vertices of the
            # dequeued vertex s. If a adjacent
            # has not been visited, then mark it
            # visited and enqueue it
            for i in self.graph[s]:
                if visited[i] == False:
                    queue.append(i)
                    visited[i] = True
    def DFSUtil(self, v, visited):
        
        # Mark the current node as visited
        # and print it
        visited.add(v)
        DFSnodelist.append(v)
                               
        for neighbour in self.graph[v]:            
            if neighbour not in visited:               
                self.DFSUtil(neighbour, visited)
  
    def DFS(self, v):
  
        # Create a set to store visited vertices
        visited = set()
  
        # Call the recursive helper function
        # to print DFS traversal
        self.DFSUtil(v, visited)

# Open input file
infile = open('11PointDFSBFS.tsp', 'r')

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
BFSnodelist = []
DFSnodelist = []
N = int(dim)
arraysize = (N,N)
distances = np.zeros(arraysize)
for i in range(0, N-1):
    a,x,y = infile.readline().strip().split(' ')
    nodelist.append([float(x), float(y)])

# Close input file
infile.close()
def createMap ():
    
    g = Graph()
    g.addEdge(1, 2)
    g.addEdge(1, 3)
    g.addEdge(1, 4)
    g.addEdge(2, 3)
    g.addEdge(3, 4)
    g.addEdge(3, 5)
    g.addEdge(4, 5)
    g.addEdge(4, 6)
    g.addEdge(4, 7)
    g.addEdge(5, 7)
    g.addEdge(5, 8)
    g.addEdge(6, 8)
    g.addEdge(7, 9)
    g.addEdge(7, 10)
    g.addEdge(8, 9)
    g.addEdge(8, 10)
    g.addEdge(8, 11)
    g.addEdge(9, 11)
    g.addEdge(10,11)
    g.BFS(1)
    g.DFS(1)

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
##    print(travellingSalesmanProblem(distances, s))

def travellingSalesmanProblem(distances, s):
    
    # store all vertex apart from source vertex
    vertex = []
    for i in range(N):
        if i != s:
            vertex.append(i)
 
    # store minimum weight Hamiltonian Cycle
    finalOrder = []
    min_path = maxsize
    next_permutation=permutations(vertex)
    for i in next_permutation:
        order = []
        # store current Path weight(cost)
        current_pathweight = 0
 
        # compute current path weight
        k = s
        for j in i:
            current_pathweight += distances[k][j]
            k = j
            order.append(j)
        current_pathweight += distances[k][s]
 
        # update minimum
        if(min_path > current_pathweight):
            finalOrder = order
            min_path = current_pathweight
            
    print(finalOrder)   
    return min_path

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

def truncateList(order):
    newlist = []
    x=0
    y=0
    for x in order:
        if y == 0:
            newlist.append(x)
            if x == 11:
                break
    return newlist
            
        
# Driver Code
if __name__ == "__main__":
 
    createDistanceTable (nodelist)
    createMap()
    DFSnodelist = truncateList(DFSnodelist)
    print(DFSnodelist)
    print("This is the Distance of the DFS List")
    print(calculateDistances(DFSnodelist))
    BFSnodelist = truncateList(BFSnodelist)
    print(BFSnodelist)
    print("This is the Distance of the BFS List")
    print(calculateDistances(BFSnodelist))
   








