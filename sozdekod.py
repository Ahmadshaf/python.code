#numbers=list(map(int,input("enter your numbers : ").split()))

#print(numbers)

#count= int(len(numbers))

#print(count)
#mean= int(sum(numbers)/count)
#print(mean)
   
#bolunen= int(input("bolunen sayiyi gir : "))
#bolum= int(input("bolum u gir : "))

#bolen= int(input("bolen sayiyi gir : " ))
#if bolen == 0:
#    print("baska bir sayi gir sifir dan farkli :  " )
#kalan = bolunen - (bolum*bolen)
#print(kalan)
 
#another code #
 # get a number from the user check it if it is an even num or odd if the num is odd make it even by adding +1 on the num 
#x= int(input("enter a number : " ))

#if x  %  2 ==0 :
#    print("it is even num ")
#else:
  #  newx = x=x+1
 #   print(newx) 
#    print("now it is even num here you go ")    


#x=int(input("enter nums : " ))
#x.count()
#print(x)

#'''bor= "it is an expensive"
#mor= "car "
#x=bor + " " +  mor   
#print(x)'''
currencies= ["lira", "dollar ", " afg", "brithis paund" , "dirham"]
#print(currencies)
#print(currencies[0:2])
'''how to add a new element on  a list'''
#currencies.append("rial")
#print(currencies)
''''how to remove an element from a list '''
#currencies.remove("lira")
#print(currencies)
#currencies.pop(0)
#print(currencies)
'''in here we can see that by using the del u can delet elemnets from the list '''
#del currencies[1]
#print(currencies)
''''by using the sort u can  write the nums from the smalest to the biggest one '''''
#num=[1,56,45,885,2,36,45]
#num.sort()
#print(num)
'''how to add a num by it is index number '''
#num[0]=100
#print(num)  #we added the 100 to the list #
#my_life = {'name':'ahmad', 'age ':'19', 'networth':'100000$'}
#print(my_life)
#my_life.update({"name":"obaid"})
#print(my_life)
#my_life.pop("name")
#print(my_life)
#for currencies in currencies:
#    print(currencies)
'''for i , currencies in enumerate(currencies):
    print(i)
    print(currencies)
class_sc={"gosh", "qabli", "molong" , "birinc"} 
for m ,  class_sc in  enumerate(class_sc):
    print(m)
    print(class_sc)'''
#def avarage(a,b,c):
 
#      x = (a+b+c)/3
#      return x 
#print(avarage(1,4,7)) 
#print(len(currencies))
#num={12,12,24,13,6,886,134}
#print(max(num))
#print(min(num))
#import os 
#print(os.getcwd())
#print(os.listdir())
#print(os.makedirs("ahmad"))

'''how to create data and  data frame by using the numpy and pandas '''
import pandas as pd
import numpy as np 
 
#data = np.array ([[1,3],[4,6]])
#print(data)
#df= pd.DataFrame(data, index=['row1','row2'], 
#                 columns=['col1', 'col2'])
#print(df)


### creating data frame with list =s ]]]

#sehir=['istanbul', 'izmir', 'antalya', 'eskisheir']
#nufus=[ 19,2,4,1]
#dict_sehir={'sehir':sehir, 'nufus':nufus}
#df_nufus=pd.DataFrame(dict_sehir)
#print(df_nufus)

#df_iq=pd.read_csv(r"C:\Users\obaid\Desktop\iris.csv")
#print(df_iq)
df_st=pd.read_csv(r"C:\Users\obaid\Desktop\Students.csv")
#print(df_st)
#print(df_iq.tail())
#print(df_iq.head(13))    # by typing the number u can get the amount of row you want to get 


## how to see how many rows in total we have got inhere 
#print(df_iq.shape)   # we have 150 ro ws and 5 columns 
#pd.set_option('display.max_rows',150)

#print(df_iq)   ## here you go all the rows we want is here now ### $
 
#print(df_iq.idex)
#print(df_iq.index)
#print(df_iq.columns)
#print(df_iq.dtypes)
#print(df_iq.info())
#print(df_iq.describe())
#print(len(df_iq))
#print(max(df_iq.index))
#print(df_iq.columns)
#print(df_iq['sepal'])
##
# 
# 
# 
# print(df_st.info())
#print(df_st.index)
#print(df_st.columns)
#print(df_st['Student_ID'])
#pd.set_option('display.max_rows',None)

#print(df_st)
#print(df_st.columns)
#print(df_st['ID'])


'''how to get 2 columns 
'''## and more than 2 

#print(df_st[['Gender', 'Age']])


#print(df_st[['Gender', 'Age','Sleep_Hours_Per_Night', 'Most_Used_Platform' ]])

#df_st['noadiction']=np.arange(0,705)
#print(df_st)


###how to create an array using numpy ##

import numpy as np 
'''now we are crating an array of 1000  rows '''  
#noadiction=np.arange(0,704)
#df_st['noadiction']
#print(df_st)


## now  we will create random int numbers ##


noadiction=np.random.randint(0, 10, size =705)
df_st['noadiction']=noadiction
print(df_st)


''''''
'''''
score1=np.random.randint(0,100,size= 705)
score2= np.random.randint(0,100,size = 705)
 ### how to create series 
series1= pd.Series(score1, index= np.arange(0, 1000))
series2= pd.Series(score2,index= np.arange(0,1000))                  
  ## #now using the asign method to asign value ##
df_st=df_st.assign(score1=series1, score2= series2)
print(df_st)
'''''''

'''''




#print(df_st)

##how to do math operation in  a column##
'''
print(df_st['noadiction'].mean())

print(df_st['noadiction'].std())
###
##how to calculate the row###

df_st['average']=(df_st['noadiction'] + df_st['Addicted_Score'])/2
print(df_st.round(1))


'''

### hwo to count something in a column like femamnle or male rich or poor ###
##print(df_st['Gender'].value_counts())


''''now we are going to count if they are in raltionship or not in relationship'''

###print(df_st['Relationship_Status'].value_counts())###
### in here we can see that we want to check it by percentage what is the ratio by this normalize= True
#print(df_st['Gender'].value_counts(normalize=True))


#print(df_st)
#print(df_st['Academic_Level'].value_counts(normalize=True))

'''how to sort a dataframe'''


#
# print(df_st.sort_values(by='Mental_Health_Score'))
#print(df_st)


"''we add a new column in our data set by the name of mathscore "

import numpy as np
mathscore=np.arange(0, 704) 
mathscore=np.random.randint(0,100 ,size=705)
df_st['math_score']=mathscore

print(df_st)


'''now we are sorting the math score by sort '''
#df_st= df_st.sort_values(by='Addicted_Score')
#print(df_st)

'''decending  by writing  ascending false and in here and doing it with two columns  '''  
#df_st=df_st.sort_values(by=['math_score', 'Conflicts_Over_Social_Media']ascending=False)
#print(df_st)

'''WE CAN ALSO SORT STRING TYPE VAREIABLES '''
#df_st=df_st.sort_values(by='Country')
#print(df_st)

'''we are creating index '''
#import numpy as np 
#import random
#new_index=np.arange(0,705)
#random.shuffle(new_index)
#print(new_index)
#df_st['new_index']=new_index     ##''''we asign that new_index in our data frame or data set ''''
#print(df_st)
## 

'''we are going to clean our data '''
import pandas as pd 
df=df_st.drop(columns=['math_score'])
print(df)
 ## we delet that one column




    

