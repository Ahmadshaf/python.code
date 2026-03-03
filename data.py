job_title= "data analyst"
job_location="turkiye"
job_salary=10
#print(id(job_title))
#print((job_location))
#p=print
#p(id(job_salary))
#p(123)
#class JobPost:
    #def__init__(self,title,location, salary ):
       # self.title=title 
       # self.location=location  
       # self.salary= salary    
#salary=523
#salary=salary.__add__(32)
#print(salary)
#int.__abs__
import pandas as pd 

#data = [100 ,-124, 234,145,112,112,45,123,431]
#series=pd.Series(data)
#print(series)
#data=["O","B","A","I","D"]
#series=pd.Series(data)
#print(series)

#data=[1,3,5,8,424,7,3541]
#series=pd.Series(data, index=["a","b","c","d","e","f","g"])## by using index you can get the label write yourself what ever you want
#series.loc["b"]=2   # in here by loc u can change the value of that b with 2 before it was 3 
#print(series)
#print(series.loc["e"]) # by typing .loc[a] you can find  the a label is 


## filtering the data 
#data = [20,52,62,48,96,67]
#series= pd.Series(data, index=["a","b","c","d","e","f"])
#print(series[series>=35])  ## we can filter that values are bigger than 35 
#
#calories={"day1":1100, "day2":2200 , "day3":1500, "day4":1400}
#series= pd.Series(calories)
#print(series[series>1200])
#series.loc["day1"]+=520  # you can add to that label by selecting it 
#print(series.loc["day1"])

## dataframe ##3
data = {"name":["ahmet","mehmet","mohammad"],
           "age":[34,67,23],
           "salary":[10000, 23453,120000]

           }
df= pd.DataFrame(data)
print(df)
## how to add a column
df["job"] =["boss","worker", "cook"]
print(df)

## how to add a new row ##
new_row=pd.DataFrame([{"name":"jan"  ,  "age": 119 , " salary":122345, "job": "chef"}])
df= pd.concat([df,new_row])
print(df)
x=int(input("please enter a number "))