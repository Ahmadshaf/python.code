
##x=int(input("enter a number"))

#while x!=0:
 # x=int(input("enter a number"))
#if x ==0:
 #   print("you entered 0 please try again ")



#num=1 
#while(num<10):

   # print(num)
    #num= num+1   

#//password = 'drone'
#for trial in range (1,5):
    #if trial==4:
    #    print("you have only one trail left ")
    #enter_password=input("enter password : ")
    #if enter_password==password:
      #print("you loggid in ")  
      #break
    #else:
       #print("wrong password")


#number = 0 
#for number in range (10):
# if number == 5:
#  continue
# print('the number '+ str(number))
#def welcome():

#  print("hello welcome back")



#welcome()
#welcome()
# import numpy as np 

# #x= np.array =([12,34,11])
# #y= np.array =([11,43,56])
# #print("add ", np .add (x,y))
# #print("substruct ", np.subtract(x,y))
# p=np.array([12,34,11,54])   ## in numpy you can only add value like int float not string 
# print(" array = ", p)^




###pandas library ###


#df= panda.read_csv(r"C:\Users\obaid\Desktop\2 donem r dersleri\python stuff\orders.csv")
#print(df)
#tail=df.tail
#print(tail)
#print(df.info())   ### we have to use () after mentioninng our thing so it is a built in function 
#print(df.tail())
#print(df.head()) 
#print(df.describe())
#print(df.columns)
#print(df.index)
#print(df.columns)
#print(len(df['Country']))         ### we can see the columns by name like country and also check how many country there are by len 
#print(df[["Country","CustomerName"]])  ## we can get two columns not one
#print(df.iloc[24])

## filtering some information 
##print(df[(df["Category"] == "Furniture")] & df["Country"] ==["UK"])
#print(df.iloc[2])
#print(df[(df["Product"] =="Laptop")])
#print(df[(df["Country"] == "Russia")])
#print(df[df["Quantity"]  >= 10 ])  # we can also see or get values like bigger or smaller than one other 
#print(df[df["Country"] == "Iran"])
#print(df[df["CustomerName"].str.startswith("A")])
#print(df[df["Product"].str.endswith("t")])
#print(df[df["Price"] >85])
#print(df[df["Country"].str.endswith("n")])
#print(df[df["Country"].str.endswith("stan")])
#df.loc[df["CustomerName"] == "Zara Ahmed","Product"] = "Pen"

#df1=df[df["CustomerName"]=="Zara Ahmed"]
#print(df1)
#k=df[df["Product"].str.endswith("b")]
#print(k)
# df.loc[df["Country"] =="USA" , "Country"] ="United state"
# print(df)
# df.loc[df["Product"] == "Sticky Notes" , "Product"] = "Pen"   ## in here we can chnage a df like we select the country it is usa we change it into united state 
# print(df)
# p=df["Country"] = df["Country"].str.upper()  # we can also make   a column upper like country name
# print(p)
# print(df)
# ## we can also remove deta from our data frame 
# df= df.drop(39)  # it hust start 
# print(df.tail())
# df= df.dropna()   ##  this one will remove the na values like when there is nothing it will be removed \
# print(df)
# m=df["Product"]= df["Product"].str.lower()   # we just make the products all lowercase 
# print(m)
# print(df)
#df=df.fillna({"product":"kakao"} , inplace= True)
#print(df)
# df=df.rename(columns={" CustomerName ":"Cutomername"})
# print(df)


#print(df["Country"].value_counts())
#print(df.groupby("Country")["Price"].sum())



import pandas as pd
# column=["pilot" , "mana" , "jerc" , "lona ", "kaka"]
# column_name = { "names":column
#                ,"height":[1.80 , 150, 20, 1.45,189]  # we al can add new columns like that we also can create a new one 
#                ,"weight":[10,123,223,31,78]}


# data=pd.DataFrame(column_name)
# #print(data)

#select = data["weight"][1]  # we can also only get one column from a data set like that 
#print(select)
#select= data.iloc[2][0]  # we can also take  the first rows or any rows by writing index num
#print(select)   #rows , column zero it will show us the first value is the rows the second is column 
 
#select = data.iloc[1][1]
#select = data.iloc[1]["names"]   # you can also mention the name of the column insted of index number 
#print(select)

# bmi =[]
#bmi=#weight(heigh/2)
# for i in range(len(data)):
#     bmi_score= data["weight"][i]/(data["height"][i]**2)
#     bmi.append(bmi_score)
    
# data["bmi"]=bmi


# print(data)
##$$this way you can do it with loops but we can also try it without loops 

##$$ in the down below we can do the same thing without loops like that 
# data["bmi"] = data["weight"] / (data["height"]**2)
# print(data)

# data.to_csv("bmi",sep="\t")
# print(data)

#data = {
#    "hours": [1,4,5,9,7.9],
#     "score" : [40,44,54,60,55]

# #}
# #df= pd.DataFrame(data)

# #from sklearn.linear_model import LinearRegression
# #x=df["hours"]
# #y=df["score"]
# #model= LinearRegression
# #model.fit(x,y)
# #model.predict([[5]])
hotel=pd.read_csv(r"C:\Users\obaid\Downloads\hotel_bookings.csv.zip")
print(hotel)
print(hotel.head(5).unique())
print(hotel[hotel]=)