import requests

# Get user input for currencies and amount
from_Currency = input("Enter First Currency (e.g., USD): ")
to_Currency = input("Enter Second Currency (e.g., EUR): ")
amount = float(input("Enter amount to convert: "))

# Your API key (replace 'YOUR_API_KEY' with your actual API key)
api_key = "CgsCX0pQlaQgAusmBMdMO0FoBSKp3IS3"

# Construct the URL with the correct query parameters
url = f"https://api.apilayer.com/fixer/convert?to={to_Currency}&from={from_Currency}&amount={amount}"

# Set up the headers with the API key
headers = {
    'apikey': api_key
}

# Send the GET request to the Fixer API
response = requests.get(url, headers=headers)

# Check the status code of the response
if response.status_code == 200:
    # Print the JSON response if the request was successful
    print(response.json())
else:
    # Print an error message if the request failed
    print(f"Error: Unable to complete the request (Status Code: {response.status_code})")
