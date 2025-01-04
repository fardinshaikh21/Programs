
import requests

def Fetch_Data():
    
    url = "https://api.freeapi.app/api/v1/public/randomusers/user/random"
    
    response = requests.get(url)
    #print(response.status_code) # Successfully 200 
    #print(response.json())
    alldata = response.json()
    
    if alldata["success"] and "data" in alldata:
        
        udata = alldata["data"]
        
        country = udata["location"]["country"]
        state = udata["location"]["state"]
        city = udata["location"]["city"]
        uname = udata["login"]["username"]
        password = udata["login"]["password"]
        
       # print("Country : ",country)    
       # print("City : ",city)
       # print("User Name : ",uname)
        return country,state,city,uname,password
    else :
       raise Exception("Data is Not Fetched")       
        
        
def main():
    
  try:        
        country,state,city,uname,password = Fetch_Data()
        print("Country : ",country)  
        print("State : ",state)        
        print("City : ",city)
        print("User Name : ",uname)
        print("Password : ",password)
  except Exception as e:
        print(e)       
       
if __name__ == "__main__":    
   main()
      
    