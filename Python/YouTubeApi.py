"""
import requests

url = "https://api.apilayer.com/youtube/auto-complete?q={q}"

payload = {}
headers= {
  "apikey": "CgsCX0pQlaQgAusmBMdMO0FoBSKp3IS3"
}

response = requests.request("GET", url, headers=headers, data = payload)

status_code = response.status_code
result = response.json()
print(result)

"""

ages = [5, 12, 17, 18, 24, 32] 

def myFunc(x): 
 if x < 18: 
  return False
 else: 
  return True
adults = filter(myFunc, ages) 

for x in adults: 
  print(x)