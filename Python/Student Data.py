import os

n = int(input("How Many Student Details You Want : "))

student_details = {
    "Rno": [],
    "Name": [],
    "Class": [],
    "Address": [],
    "Phone No": []
}

for i in range(n):
    print(f"\n\tEnter {i+1} Student Details : \n")
    s_rno = int(input(f"Enter Student Roll No : "))
    s_name = input("Enter Student Name : ")
    s_class = input("Enter Student Class : ")
    s_address = input("Enter Student Address : ")
    s_phone_no = int(input("Enter Student Phone No : "))

    student_details["Rno"].append(s_rno)
    student_details["Name"].append(s_name)
    student_details["Class"].append(s_class)
    student_details["Address"].append(s_address)
    student_details["Phone No"].append(s_phone_no)
    
    
#print(student_details)
 
data = str(student_details)

with open("Student1_Details.txt","w") as f:    
    f.write(data)

  
with open("Student1_Details.txt","r") as f:       
    print("\n\n")
    print(f.read())
        
