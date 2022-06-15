import json
import preprocessor as p
import matplotlib.pyplot as plt
from textblob import TextBlob
import pandas as pd
from pandas import DataFrame
import numpy as np
import sklearn
from sklearn import linear_model
from sklearn.linear_model import TweedieRegressor
from sklearn.model_selection import cross_val_score
from sklearn.svm import SVC
from sklearn.naive_bayes import GaussianNB
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import KFold
from sklearn.model_selection import train_test_split
from sklearn.manifold import TSNE

with open('savedtweets_americalatina.json') as json_file:
    file1 = json.load(json_file)

with open('savedtweets_machinelearning.json') as json_file:
    file2 = json.load(json_file)

with open('savedtweets_superleague.json') as json_file:
    file3 = json.load(json_file)

with open('savedtweets_weibo.json') as json_file:
    file4 = json.load(json_file)

tweetlist1 = []
tweetlist2 = []
tweetlist3 = []
tweetlist4 = []

classcountlist = []


offset1 = 0
for x in range(100):
    if "latitude" not in file1[x-offset1]:
        del file1[x-offset1]
        offset1=offset1+1
    else:
        file1[x-offset1]["text"]=p.clean(file1[x-offset1]["text"])
        tweetlist1.append(file1[x-offset1])
        classcountlist.append(0)

offset2 = 0
for x in range(100):
    if "latitude" not in file2[x-offset2]:
        del file2[x-offset2]
        offset2=offset2+1
    else:
        file2[x-offset2]["text"]=p.clean(file2[x-offset2]["text"])
        tweetlist2.append(file2[x-offset2])
        classcountlist.append(1)

offset3 = 0
for x in range(100):
    if "latitude" not in file3[x-offset3]:
        del file3[x-offset3]
        offset3=offset3+1
    else:
        file3[x-offset3]["text"]=p.clean(file3[x-offset3]["text"])
        tweetlist3.append(file3[x-offset3])
        classcountlist.append(2)

offset4 = 0
for x in range(100):
    if "latitude" not in file4[x-offset4]:
        del file4[x-offset4]
        offset4=offset4+1
    else:
        file4[x-offset4]["text"]=p.clean(file4[x-offset4]["text"])
        tweetlist4.append(file4[x-offset4])
        classcountlist.append(3)


with open("savedtweets_class0.json", "w") as outfile1:
    json.dump(file1, outfile1)

with open("savedtweets_class1.json", "w") as outfile2:
    json.dump(file2, outfile2)

with open("savedtweets_class2.json", "w") as outfile3:
    json.dump(file3, outfile3)
    
with open("savedtweets_class3.json", "w") as outfile4:
    json.dump(file4, outfile4)


pos=0
neg=0
neu=0

xaxis = ["Negitive","Neutral","Positive"]

for trend in tweetlist1:
        blob = TextBlob(trend["text"])
        if -.15< blob.sentiment.polarity < .15:
            neu = neu +1
        if blob.sentiment.polarity > .15:
            pos = pos +1
        if blob.sentiment.polarity < -.15:
            neg = neg +1
yaxis = [neg,neu,pos]
d = {'t':xaxis,'v':yaxis}
df = DataFrame(d)
df.plot.bar(x='t',y='v',rot=0)
plt.show(block=False)

pos=0
neg=0
neu=0
for trend in tweetlist2:
        blob = TextBlob(trend["text"])
        if -.15< blob.sentiment.polarity < .15:
            neu = neu +1
        if blob.sentiment.polarity > .15:
            pos = pos +1
        if blob.sentiment.polarity < -.15:
            neg = neg +1
yaxis = [neg,neu,pos]
d = {'t':xaxis,'v':yaxis}
df = DataFrame(d)
df.plot.bar(x='t',y='v',rot=0)
plt.show(block=False)

pos=0
neg=0
neu=0
for trend in tweetlist3:
        blob = TextBlob(trend["text"])
        if -.15< blob.sentiment.polarity < .15:
            neu = neu +1
        if blob.sentiment.polarity > .15:
            pos = pos +1
        if blob.sentiment.polarity < -.15:
            neg = neg +1
yaxis = [neg,neu,pos]
d = {'t':xaxis,'v':yaxis}
df = DataFrame(d)
df.plot.bar(x='t',y='v',rot=0)
plt.show(block=False)

pos=0
neg=0
neu=0
for trend in tweetlist4:
        blob = TextBlob(trend["text"])
        if -.15< blob.sentiment.polarity < .15:
            neu = neu +1
        if blob.sentiment.polarity > .15:
            pos = pos +1
        if blob.sentiment.polarity < -.15:
            neg = neg +1
yaxis = [neg,neu,pos]
d = {'t':xaxis,'v':yaxis}
df = DataFrame(d)
df.plot.bar(x='t',y='v',rot=0)
plt.show(block=False)



fulltweetlist = tweetlist1 + tweetlist2 + tweetlist3 +tweetlist4

mlArray = np.zeros((len(fulltweetlist),5))

for x in range(len(fulltweetlist)):
    mlArray[x,0]=len(fulltweetlist[x]["text"])
    mlArray[x,1]=fulltweetlist[x]["retweet_count"]
    mlArray[x,2]=fulltweetlist[x]["latitude"]
    mlArray[x,3]=fulltweetlist[x]["longitude"]
    if fulltweetlist[x]["lang"] == "en":
        mlArray[x,4]="0"
    else:
        mlArray[x,4]="100"
    
classArray = np.array(classcountlist)

estimators = {
    'KNeighborsClassifier': KNeighborsClassifier(), 
    'SVC': SVC(),
    'GaussianNB': GaussianNB()}
for estimator_name, estimator_object in estimators.items():
        kfold = KFold(n_splits=10, random_state=11, shuffle=True)
        scores = cross_val_score(estimator=estimator_object, 
        X=mlArray, y=classArray, cv=kfold)    
        print(f'{estimator_name:>20}: ' + 
          f'mean accuracy={scores.mean():.2%}; ' +
          f'standard deviation={scores.std():.2%}')

tsne = TSNE(n_components=2, random_state=11)
reduced_data = tsne.fit_transform(mlArray)
reduced_data.shape

figure = plt.figure(figsize=(5, 5))
dots = plt.scatter(reduced_data[:, 0], reduced_data[:, 1], c='green')
#c=digits.target, cmap=plt.cm.get_cmap('nipy_spectral_r', 4)
#colorbar = plt.colorbar(dots)
plt.show(block=False)

# I think that class 0 is clustered in the bottom left corner becuase there are either mostly postitive or neutral.
# my scatter plot is not formatted the best

