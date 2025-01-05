import requests

def From(data):
    return data['query']['from']
    
def To(data):
    return data['query']['to']
    
def Result(data):
   return data['result']
   
from_Currency = input("Enter from Currency : ")
to_Currency = input("Enter to Currency : ")
Amount = float(input("Enter Amount : "))

apikey = "CgsCX0pQlaQgAusmBMdMO0FoBSKp3IS3"

url = f"https://api.apilayer.com/fixer/convert?to={to_Currency}&from={from_Currency}&amount={Amount}"

headers = {'apikey' : apikey}
    
response = requests.get(url,headers = headers)
data = response.json()

#print(response.status_code)
#print(response.json())

print("\n\n-------------------------------------")
From = From(data)
print("\tFrom : ",From)
print("-------------------------------------")
To = To(data)
print("\tTo : ",To)
print("-------------------------------------")
result = Result(data)
print("\tResult : ",result)