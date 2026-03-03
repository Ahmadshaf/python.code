#print("hello world")
#x=3
#y=9
#print(x+y-x)
#print(" ahmad "+" shafi "+" seddiqi " )
# integers 
#model=2006
#price=1000000
#print(f"the price of that is car {price} ", f"and the model is {model}")
# float  for exmaple 10.33 or 12.564
#distance= 3.25

#print(f"you are {distance} km  far from me ")
#input("are you a student")
### #
##how to change variables like form int to str or to float#
#age= 12
#name="ahmad shafi seddiqi"
#distance = 3.2
#is_student=False
# here si we change the float to int ###
##distance= int(distance)
#print(distance)
##3# and also change the int in to string ###


##age = str(age)

##print(age)


## input ##
#name = input("what is your name  : "  )
#how =input ("how are you"  )
#print ( "i am happy to hear that", name )

### exercise ##
#lenght= input ("enter the lenght   : " )
#width = input ("enter the width  : ")

#lenght= int(lenght)
#width =int(width)

#rectangle = lenght*width
#print(rectangle)


## game ##3 making ###3
#adjective1 =input("enter an adjective (description) : " )
#noun1= input ("enter a noun")
#adjective2= input("enter an adjective(descriptions) :  ")
#verb1= input("enter a verb (ending with ing ): ")
#adjective3=input("enter an adjective (description) : ")

#print(f"today we went to a  {adjective1} zoo  ")
#print(f" in a car show, you saw  {noun1} "  )
#print(f"{noun1} was {adjective2} and {verb1}")
#print(f"i was {adjective3 } ! ")

#car =2
#car =car+1
#print(car)
#car +=1
#print(car)
#x=3.89
#y=-5
#z=9
#result=round(x)
#print(result)
#result=abs(y)
#print(result) 

##3####exercise triangle ###
#import math 
#a=float(input("enter the a side  of triangle  : "  ))
#b=float(input("enter the b sides of the triangle  : " ))
#c=math.sqrt(pow(a,2)+pow(b,2))
#c=int(c)
#print(c)
#print(f" your triangle area is { c } " )

### if statment ###
#age=int(input("enter you age please "))
#if age>=18:
#    print(f"you are {age} you can apply for a credit card")
#else:
 # print(f"you are under {18 } you can not apply for a credit card")

### a calculator##
#operation=input("can u please select wich operation do you want to do : " )

#num1=float(input(" enter num 1  : " ))

#num2=float(input("enter num 2 : " ))


#import math



#if operation== "+":
  #result1=(num1+num2)
 # print(result1)

#elif operation=="-":
  # result2=(num1-num2)
 #  print(result2)


#elif operation=="/":
 #   result3=(num1/num2)
  #  print(result3)



#elif operation=="*":
 #  result4=(num1*num2)
  # print(result4)
       
         
## temerature changer ####
#unit=input("is it celsius or fahrenheit  (c/f)   : " )
#temp=float(input("what is the tempurature : " ))
#if unit =="c":
   
    #temp= round((9*temp)/5+32 ,1)
  #  print(f"the tempurature is {temp} °f")

#elif unit=="f":
  #  temp=round((temp-32)*5/9,1)
 #   print(f"the tempurature is {temp} °c")

#else:
 #   print("please enter one of the variable :  " )



## conditional expressions ###


#num=9
#print("money" if  num > 25  else "broke")
#result="even" if num % 2 ==0 else "odd"
#print(result)


## how to find a lenght of a sting value, for example how many character there are ###

#password= input("enter your password: " )
#result = len(password)
#if result >= 8:
#    print("correct password")
#elif result<=4:
#    print("your password should be 8 character or more ")
#else :
 #   print("incorrect password")    


#print(f"there are {result} characters in this text ")


### replace method##

#phone_number=input("enter you phone number: " )
#phone_number=phone_number.replace("0" , "+90")
#print(phone_number)

#shape=input("what do u want to draw : " )
#question=int(input("how big do u want to draw your shape: " ))


#import turtle 
#t=turtle.Turtle()
#t.shape(question)
#turtle.done
#credit="123456789"
#credit=credit[ : :-1]
#print(credit)

#name= input("enter your name : " )
#if name == "":
 #   print("you have not write anything")
#else:
 #   print( f" hello { name }  welcome back ")    



    ### this was  normal if statments ###


## but this one is with while 

#name= input("enter your name : " )
#while name == "":
 #   print("you have not write anything")
  #  name= input("enter your name : " )
   # print( f" hello { name }  welcome back ")    

#food = input ("what kind of food do u like(to quite enter q : ) ")
#while not food =="q":
  #  print(f"you like {food} ")
 #   food = input ("what  else  do u like(to quite enter q : ) ")  

#print("you got scammed ") 

## ### ###
#num=int(input ("enter a number from 1:10 : " ))
#while num < 1 or num  > 10 :
 #   print("ur number  is invalid please enter a valid number 1:10  : " )
  #  num= int(input ("enter a number  again from 1:10 : " ))
#print(f" the number u haev entered is {num}")    

#for x in range(1,12,3):
   # print( x,"ahmad shafi seddiqi")   


##break ## and ##continue
#for x in range (1,24,3):
    
  #if x ==16:
   # continue   ##continue will pass from that value as if there was no 16 ###

  #print(x)


#for m in range (1,9,3):
   # if m==9:
    #    break 
   # print(m)
#import time
#my_time=int(input ("how long do you want to sleep second only : " ))

#for x in range(0,my_time):
 #print(x)

 #time.sleep(1)

#print("time is over ")
#import math 
#print("welcome to our math quiz")
#q=int(input(f"what  is 5+8 :  " ))
#while  not q == 13:
  # print("wrong answer ")
 #  q=int(input(f"what  is 5+8 :  " ))
#else:
  # print("you are answer is true ")
#import random 
#while True:
 #num1=random.randint(1,100)

# num2=random.randint(1,100)
#question=input(f"waht is { num1 } ,  '+ '  { num2 }  ?  " )
#answer = num1+num2
#u_answer=int(input(question))
#if u_answer ==answer:
 #print("correct asnwer ")
#############################import math ##############################
#a=int(input("enter num 1 for a : " ))
#b=int(input("enter num 2 for b : "))
#c=int(input("enter num 3 for c : "))
#if a==0:
# print(" you are not allowed to type zero ")

 #exit()

 

#d=b*b-4*a*c
#if d<0:
# print("there is no real root for this values")


    
    


#x1=-b+d**0.5
#x2=-b-d**0.5
#print(f"your roots are  { x1/2 , x2/2 }  " )     

#points=0
#word= "banana"
#letter =input("guess a letter in secret word  :  " ).lower()
#while letter  not in word:
 #   print(f"the  {letter} not  found  ")
 #   print(points)
 #   letter =input("guess a letter in secret word  :  " ).lower()

#else:
  #  print(f"{letter }  found ")
  #  print(f"  YOUR POINT IS {points +1} ")
#foods={"juice", "eggs", "chips", "pizza" }
#food=input("what do you want to buy  :  " ).lower()
#if food in foods :
 # print(f"we have {food}")
  
#else:
 # print(f"we do not have {food}")
 # print(f"we have {foods}")



#m=int(input("enter the number you wanna get the square of it  : " ))
#squares=[m*m for m in range (1,11)]
#print(squares) 

#m=int(input("enter the number you wanna get the square of it  : " ))
#squares=[m*m ]
#print(squares)




### calculator ##

#print("1 toplama")
#print("2 cikartma")
#print("3 carpma ")
#print("4 bolme")
#secim= int(input("enter a number between 1 to 4 : "))
#if secim ==1:
#    first_num=int(input("enter the first number : "))
#    second_num=int(input("enter the second number : "))
#    print(f" the answer is {first_num+second_num} ")
#elif secim ==2:
#     first_num=int(input("enter the first number : "))
#     second_num=int(input("enter the second number : "))
#     print(f" the answer is {first_num-second_num}" )   
#elif secim ==3:
#     first_num=int(input("enter the first number : "))
#     second_num=int(input("enter the second number : "))
#     print(f" the answer is {first_num*second_num}")    
#elif secim ==4 :
 #    first_num=int(input("enter the first number : "))
 #    second_num=int(input("enter the second number : "))
 #    print(f" the answer is  {first_num/second_num}" )
#else :
  #/   print("wrong typing please enter 1 to 4 : ")


import tkinter as tk

def click_button(value):
    current = entry.get()
    entry.delete(0, tk.END)
    entry.insert(0, current + value)

def clear_entry():
    entry.delete(0, tk.END)

def calculate():
    try:
        result = eval(entry.get())
        entry.delete(0, tk.END)
        entry.insert(0, str(result))
    except:
        entry.delete(0, tk.END)
        entry.insert(0, "Error")

root = tk.Tk()
root.title("Calculator")

entry = tk.Entry(root, width=25, borderwidth=5, font=("Arial", 26))
entry.grid(row=0, column=0, columnspan=4, padx=10, pady=10)

buttons = [
    ("7", 1, 0), ("8", 1, 1), ("9", 1, 2), ("/", 1, 3),
    ("4", 2, 0), ("5", 2, 1), ("6", 2, 2), ("*", 2, 3),
    ("1", 3, 0), ("2", 3, 1), ("3", 3, 2), ("-", 3, 3),
    ("0", 4, 0), (".", 4, 1), ("=", 4, 2), ("+", 4, 3)
]

for text, row, col in buttons:
    if text == "=":
        btn = tk.Button(root, text=text, padx=20, pady=20, command=calculate)
    else:
        btn = tk.Button(root, text=text, padx=20, pady=20, command=lambda x=text: click_button(x))
    btn.grid(row=row, column=col)

clear_btn = tk.Button(root, text="C", padx=20, pady=20, command=clear_entry)
clear_btn.grid(row=5, column=0, columnspan=4, sticky="we")

root.mainloop()



