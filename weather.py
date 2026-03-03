###''''
''' ''
import requests
api_key= '4fb061f9c1bb91d86b8bb7292cc65697'
city= input(" please enter  the city u wanna check the weather : " )
url = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}&units=metric"
response= requests.get(url)
data=response.json()

if data['cod']==200:
    print("city:",city)
    print("tempreture:",data ["main" ] , ["temp"] , "°C")
    print("Weather:", data["weather"][0]["description"])
else:
   
    print("City not found or API key not active yet") '''
''''''''
#######1
import tkinter as tk
root=tk.Tk()

root.geometry("800x500")

root.title("ahmad")
root.mainloop()
