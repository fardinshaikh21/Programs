"""
import csv
# Writing to a CSV file
with open('example.csv', 'w', newline='') as file:
 writer = csv.writer(file)
 writer.writerow(["Name", "Age"])
 writer.writerow(["Alice", 30])
 writer.writerow(["Bob", 25])
# Reading from a CSV file
with open('example.csv', 'r') as file:
 reader = csv.reader(file)
 for row in reader:
  print(row)
  
"""  
import json

data = {
"name": "John Doe",
 "age": 28,
 "city": "New York"
}
# Writing JSON to a file
with open('data.json', 'w') as file:
 json.dump(data, file)
# Reading JSON from a file
with open('data.json', 'r') as file:
 data_loaded = json.load(file)
 print(data_loaded)