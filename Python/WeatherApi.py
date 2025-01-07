
import requests

api_key = "044f5f001e62c41a6a5760e1f36a5ac4"

city = input("Enter City : ")

url = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}"

response = requests.get(url)

data = response.json()

#print(response.status_code)
#print(data)

id = data['weather'][0]['id']
des = data['weather'][0]['description']
temp = data['main']['temp']
pressure = data['main']['pressure']
humidity = data['main']['humidity']
wind = data['wind']
country = data['sys']["country"]

print("\nId : ",id)
print("Description : ",des)
print("Temprature : ",temp)
print("Pressure : ",pressure)
print("Humidity : ",humidity)
print("Wind : ",wind)
print("Country : ",country)