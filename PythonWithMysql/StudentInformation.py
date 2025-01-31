import mysql.connector as Myconn
from mysql.connector import Error

try:
  
   conn = Myconn.connect(host='localhost',user='root',port=3307,password='',database='Programs')
   
   mydb = conn.cursor()

#    mydb.execute("create table student1(Rno int primary key,Sname text,Sclass text,Saddress text)")
#    print("Create table Successfully...")

   n = int(input("Enter How Many Student Details You fill : "))

   for i in range(n):
      
      rno = int(input("Enter Student Roll No : "))
      sname = input("Enter Student Name : ")
      sclass = input("Enter Student Class : ")
      saddress = input("Enter Student Address : ")

      query = "insert into student1 values(%s,%s,%s,%s)"
      values = (rno,sname,sclass,saddress)

      mydb.execute(query,values)
    
   print(f"{n} records inserted successfully...")
   
   mydb.execute("select * from student1")

   for i in mydb.fetchall():
      print(i)

   conn.commit()
   
except Error as e:
   print(e)   

finally:

   if conn.is_connected():
      mydb.close()
      conn.close()
      print("Connection & Commit Close")   