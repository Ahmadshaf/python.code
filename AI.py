
#x=input("what is your name : ").strip().title()
##x=x.strip()   # # by using this it will delet the blank space between the name in input 
#print("hello " , x)

# x=float(input( " enter number : "))
# y=float(input("enter number  :"))
# z=round(x+y)
# print(f"your answer is {z}")

# x=float(input( " enter number : "))
# y=float(input("enter number  :"))
# z=round(x/y,2)  # we can see that by puting ,2 it will only give us the two point rounding 
# print(f"your answer is {z}")
# name= input("what is your name : ")
# def hello ():   ## it will help us 
#     print("yooo")
# hello ()
# print(name)

### def usage ###

# def hello(to):
#     print("hello", to) 
# name=input("what is your name ")
# hello(name)


# def  sayhi ():
#     print("hi")

# sayhi()


# # def functiion with a parameter 
# def hello(name):
#     print("hello "  + name )
# hello(" kaoka")


scores=[]
print("tyoe 5 peoples score")
for i in range (5):
    score = int(input("enter the score: "))
    scores.append(score)
average = sum(scores)/len(scores)
print(f"the average is {average}")

max_value = scores[0]
min_value = scores[0]

for s in scores:
    if s > max_value:
        max_value=s 
    if s < min_value:
        min_value=s 
print(f"max value : {max_value}")
print(f" min value : {min_value}") 
