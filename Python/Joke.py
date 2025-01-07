import requests

def Fetch_Joke():
    
    url = "https://api.freeapi.app/api/v1/public/randomjokes/joke/random"
    
    response = requests.get(url)
    #print(response.json())
    udata = response.json()
    
    if udata["success"]:
        
        joke = udata["data"]      
        Djoke = joke["content"]
        return Djoke
        
    else:
       raise Exception("Joke is Not Fetched")        

def Main():
    
    try:
        
        joke = Fetch_Joke()
        print("\tJoke is :\n\n",joke)
        
    except Exception as e:
      print(e)     
      
if __name__ == "__main__" :
   Main()    