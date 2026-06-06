###  how to create random password with python ###
##with digits####
##import string
##import random
##code= string.digits
##print("".join(random.choices(code,k=10)))

 ### this is how we create password with  strings ###
#import string
#import random

#password=string.ascii_letters
#print("".join(random.choices(password,k=18)))


#names= ["mohammad", "ahmad", "islam"]

#ages=[35 , 19 ,22]
#for m , k in zip(names, ages):
    #print(f"{m} =>  {k}")


##creating a plot 
# import matplotlib.pyplot as plt 

# salary = [355,420,520]
# names=["islam", "ahmad","mohammad"]
# plt.bar(names,salary, color=['red', 'blue' ,'green'])
# plt.title("income trading")
# plt.ylabel("vlaue")
# plt.show()




# numbers = [5, 10, 15]  # min, median, max
# labels = ['Min', 'Median', 'Max']

# plt.bar(labels, numbers, color=['red', 'blue', 'green'])
# plt.title("3-Bar Chart Example")
# plt.ylabel("Value")
# plt.show()


# import numpy as np import pygame
# from sys import exit


# pygame.init()
# screen = pygame.display.set_mode((width,height))
# clock = pygame.time.Clock()


# while True:
#     for event in pygame.event.get():
#         if event.type == pygame.QUIT:
#             pygame.quit()
#             exit()


#         #game code


#         pygame.display.update()
#         clock.tick(60)

 
#import numpy as np
# p= np.ones(4)
# print(p)
# print(type(p[1]))

# l=np.linspace(2,10,6) # it will give us from the number 2  to 10 give me 6 number between them 
# print(l)

# a_list=[100,12,734,145,145,1212]
# a=np.array([a_list])

# print(a)

# print(type(a))

## how to generate random numbers #
# x=int(input("please enter a number yoiu wanna generate: "))
# t=int(input("enter from where your number starts:"))
# r=int(input("enter the number u want to stop: "))
#np.random.seed(0)

# a=np.random.randint(t,r,size=x)
# print(a)
# a[0:2]

# print(a)

#a=np.random.randint(1,15,size=12)
#print(a)
#print(a[0:2])    # in here we can select from 0 to 2 it will print 
#f= np.array([1,2,3,4,5,61,14,15])
#print(f>12)  #  we can compare  wwith  our array 
#print(f)

#print(f[f<29])    #in here we can compare it with all the elemnets in our array if they are bigger than our things
#b= np.array([1,8,3,6,2,22,1,12])
#print(f+b)  # we can add two arrays toghether ## we can do "*" , "-" , "/" all 
#print(np.sort(f))  ## we sort the f array like this 
#print(np.add(f,99)) ## we can add 99 to all the elements one by one 
#m=np.array(['mohammad', 'ahmad', 'wali '])
#print(np.append(m , 'ali'))
#print(m)
#print(np.sort(m))
# import openai 
# openai.api_key="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"
# def chat_with_gbt(prompt):
#    response = openai.Chatcompletion.create(
#       model= "gpt-5.5",
#       messages= [{"role":"user","content":prompt}]
#    )
#    return response.choices[0].message.content.strip()
# if __name__ == "__main__ ":
#    while True :
#      user_input=  input("ahmet: ")    
#      if user_input.lower() in [ "quit", "exit", "bye"]:
#         break 
#      response = chat_with_gbt(user_input)
#      print("chatbot : ", response) 
import openai

# 1. YENİ API ANAHTARINI BURAYA YAPIŞTIR
openai.api_key = "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"

def chat_with_gpt(prompt):
    try:
        # 2. Güncel API formatı ve çalışan model (gpt-4o-mini)
        response = openai.chat.completions.create(
            model="gpt-4o-mini",  
            messages=[{"role": "user", "content": prompt}]
        )
        # 3. Yazım hatası düzeltildi (.strip)
        return response.choices[0].message.content.strip()
    except Exception as e:
        return f"Hata oluştu: {e}"

if __name__ == "__main__":
    while True:
        user_input = input("ahmet: ")
        if user_input.lower() in ["quit", "exit", "bye"]:
            print("Chatbot kapatılıyor...")
            break
        
        response = chat_with_gpt(user_input)
        # 4. Hizalama (Indentation) tamamen düzeltildi
        print("chatbot : ", response)