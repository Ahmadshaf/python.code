

### number guessing game ####

#import random

#print("guess the number")

#player=int(input("guess the numebr between (1,10) : " ))


#r=random.randrange(1,10)
#while  player != r :
    # print("wrong")
    # player=int(input("guess the numebr between (1,10) : " ))
    # if player <r :
     
    #  print("you number is low  ") 
    #  player=int(input("guess the numebr between (1,10) : " ))
      
    # elif player >r :
    #  print("your number is high  ")
 #     player=int(input("guess the numebr between (1,10) : " ))


#     elif player == r :
   #    print("your answer is correct ")
  #     break           
   
   
   #### rock sisecer and paper game ####3
#import random
#user_wins=0
#computer_wins=0
#options=["rock","paper","scissors"]



    
    
    
    
   

#if player <r :
 #   print(f"you number is low  the answer is {r}")
#elif player >r :
  #  print(f"your number is high the answer is {r} ")


#while True:

   # user_input = input("type rock/paper/scissors or q to quit : ").lower()
   # if user_input == "q":
    #    break
   # 3if user_input not in options:
      #  continue

    # 👇 Move these lines INSIDE the loop (indent them)
  #  random_number = random.randint(0, 2)
   # computer_pick = options[random_number]
   # print("computer picked", computer_pick + ".")

   # if user_input == "rock" and computer_pick == "scissors":
   #     print("you won")
   #     user_wins += 1
   # elif user_input == "paper" and computer_pick == "rock":
   #     print("you won")
   #     user_wins += 1
   # elif user_input == "scissors" and computer_pick == "paper":
   #     print("you won")
   #     user_wins += 1
  #  else:
  #      print("you lost")
 #       computer_wins += 1   
      
   
    
#print("you won", user_wins , "times")
#print("computer won " , computer_wins , "times")       

 
##how to run 2 for loops at the same time ###

    
### loops###

#rows=int(input("enter how many rows do u want : " ) )
#columns=int(input("enter how many columns do u wan t:  " ))
#symbol=input("which symbool do u want man : " )


#for x in range (rows):

 #for m in range(columns):
  #  print(symbol,end="  ")
 #print()




### sleeping time counter ###
#print(" welcome to your sleep time counter  type stc for sleep counter counter ")
#start_sleeping=int(input("when di you start sleeping   :  "  ))
#wake_up=int(input("when did you wake up  :  " ))

#if start_sleeping>=12:
    
 #   print( f" you sleep for {24 -  start_sleeping  + wake_up}  hours "  )  
 #   quit

#else:
   #print(f"  you sleep for {wake_up - start_sleeping  + 6} hours ")   




### project 1 to 10 ##
#import math 
#x=int(input("enter a number where u wanna start addition operation :  " ))
#y=int(input("enter a number where u wanna to stop  addition operation :  " ))
#z=int(input("enter the difference each number "))

#op=(y-x/z) +1
#op


#num_pad=((1,2,3),
  #       (4,5,6),
 #        (7,8,9),
 #       ("*",0,"#"))
#for row in num_pad:
   #for num in row:
    #  print(num , end= "  ")
  # print()   

#capital={"usa":"wahsington dc " ,
 #        "afghanistan" : "kabul ",
  #       "turkey" :"ankara",
   #      "russia":"moscow"}
#print(capital.get("russia"))#
#print(capital.get(  "afghanist" ))    
#capital.update({"germany":"hamburg"})
#print(capital.get("germany")) 
#capital.update ({"netherland":"london"})
#print(capital.get ("netherland"))
#for value in capital.values():
# #   print(value)
#capital=capital.pop("netherland") 
#print(value)   
#print(capital)


#menu= {"pizza":3.00,
 #      "cake":4.00,
  #     "lemon juic":1.00,
   #    "freis":4.50,
    #   "popcorn":12.00,
    #   "soda":1.00}
#card= []
#total=0
#for key, value in menu.items() :
#    print(f"{key}: ${value}")
#while True:
#      food=input("select an item (q to quit): ").lower()
#      if food =="q":
#         break
#      elif menu.get(food) is not None:
#          card.append(food)
#print()          
#for food in card :
#    total += menu.get (food)
#    print(food, end=" ")

#print()
#print(f"total is ${total}")
#import random
#number =random.randint(1,8)
#print(number)
#import random
#highest_number= 100
#lowest_number=1
#answer= random.randint(lowest_number , highest_number)
#guessess=0
#is_running = True
#print("welcome to our game ")
#print(f"select a number between {lowest_number} and {highest_number}")
#while is_running:


##3multiplication table###
###m=int(input("enter which multiplication do u want : "))
#for i in range(1,11):

   # print(f"{m} * {i}  =  {m*i} " )






#/#for x in range(1,11):
 #   print(x)
#for y in range (1,11):
 #   print(y, end="")



#def happy(name):

 #  print(f"to you ")  
 #  print(f"happy birthday to {name} ")
#happy("shabir ")
#happy("obaid")
#happy("wali ")


#def my_class(name):
 #   print(f"english class ")
 #   print(f"english teacher {name}")
#my_class("ates_dalyan")
#def obaid(name):
 #   print(f"{name}  millionaire")
#obaid("obaid you are ")


#def add(x,y):
#    z=x+y
#    return z 
#def subtract(x,y):
#    z=x-y
#    return z
#def divide(x,y):
#    z=x/y
#    return z
#def multiply(x,y):
##    z=x*y 
#    return z 
#print(add(1, 4 ))
#print(subtract(1, 4 ))

#def creat_name(name, last ):
#    name= name.upper()
#    last= last.upper()
#    return name  +  " " + last  
#full_name=creat_name("ahmad Shafi  " , "  seDDiqi ")
#print(full_name)

#import time
#def timer (start,end):
#    for x in range (0,10):
#       
#        print(x)
#       
#        time.sleep(1)
#        print("next one " ,  "  " )      
#        
#timer(0,10 )           

#x=input("are you a male or a female  type m/f  :  " )
#y=input("enter your name please : " )
#z=input("enter your last name  : " )
#if x== "m":
  
#   title1=  " mr "
#else :
#    title1 = "  ms  "   
#def hello (greeting, title , first , last1 ):
#    print(f"{greeting} {title}   {first}  {last1} ")
#hello(  greeting=" hello  "  ,  title  =  title1    ,  first =  y   ,  last1 =  z )
#### snake game### 
import turtle

import time
delay = 0.05
wn=turtle.Screen()
wn.title("snake game  by seddiqi")
wn.bgcolor("black")
wn.setup(width=800, height=500)
wn.tracer(0)
head = turtle.Turtle()
head.speed(0)
head.color("orange")
head.shape("square")
head.penup()
head.goto(0,0)
head.direction="stop"

# SNAKE  MOVEMENT ## 
#function
def go_up():
   head.direction="up"
def go_down():
   head.direction = "down"
def go_right():
   head.direction= "right"
def go_left():
   head.direction = "left"



def move():


   
   if head.direction== "up":
      y = head.ycor()
      head.sety (y+20)
   
   
   
   
   if head.direction== "down":
      y = head.ycor()
      head.sety(y-20)   
      
   
   
   if head.direction=="left":
      x= head.xcor()
      head.setx(x-20)
   
   
   
   
   if head.direction=="right":
      x= head.xcor()
      head.setx(x+20)   

# keyboard # 
wn.listen()
wn.onkey(go_up,"w")
wn.onkey(go_down, "s")
wn.onkey(go_right, "d")
wn.onkey(go_left, "a")


while True:

   

   wn.update() 

   move()
   time.sleep(delay)
#wn.mainloop()



