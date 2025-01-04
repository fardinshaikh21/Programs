import requests


def User_Data(url):
   response = requests.get(url)
   return response.json()
   
def User_Name(response):
   title = response["data"]["name"]["title"]
   first = response["data"]["name"]["first"]
   last = response["data"]["name"]["last"]
   return title,first,last
   
def Gender(response):
    return response['data']['gender']    
    
def location(response):
    city = response['data']['location']['city']  
    state = response['data']['location']['state']  
    country = response['data']['location']['country']  
    return city,state,country
    
def Email(response):
   return response['data']['email']
   
def User_Name_Pass(response):
   username = response['data']['login']['username']   
   password = response['data']['login']['password'] 
   return username,password
   
def Age(response):
   return response['data']['dob']['age']
   
   
def Phone_No(response):
  return response['data']['phone']
  
  
url = "https://api.freeapi.app/api/v1/public/randomusers/user/random"

response = User_Data(url)
#print(response)

print("Gender : ",Gender(response))

title,first,last = User_Name(response)
print("Name : ",title,first,last)

print("Age : ",Age(response))

print("Email : ",Email(response))

print("Phone_No : ",Phone_No(response))

city,state,country = location(response)
print("City : ",city)
print("State : ",state)
print("Country : ",country)

username,password = User_Name_Pass(response)
print("Username : ",username)
print("Password : ",password)

