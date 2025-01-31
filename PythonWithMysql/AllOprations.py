import mysql.connector as Myconn
from mysql.connector import Error

try:

   conn = Myconn.connect(host="localhost",user="root",password="Fardin@2121",port=3306,database="project",auth_plugin="mysql_native_password")

   #if(conn.is_connected()):
       #print("Connection Establish...")

   my_cursor = conn.cursor() 
   
   #my_cursor.execute("create table student(Srno int,Sname text,Sclass text,Saddress text)")
   #print("Create Table Successfully...")
    
   flag = True

   while(flag):
       print("Press 0 for Exit")
       print("Press 1 for Insert Record")
       print("Press 2 for Display Record")
       print("Press 3 for Update Record")
       print("Press 4 for Delete Record")
       ch = int(input("\nEnter Your Choice : "))
          
       if(ch==0):
        flag = False
        print("You Exit...")
        break

       elif(ch==1):
           n = int(input("Enter How Many Values You Insert : "))
           for i in range(n):
            Srno = int(input("Enter Student Roll no : "))
            Sname = input("Enter Student Name : ")
            Sclass = input("Enter Student Class : ")
            Saddress = input("Enter Student Address : ")

            query = "insert into student values(%s,%s,%s,%s)"
            values = [Srno,Sname,Sclass,Saddress]
            my_cursor.execute(query,values)

           conn.commit() 
           print(f"Total {n} Record Inserted Successfully...")

       elif(ch==2):
           my_cursor.execute("select * from student")
           for i in my_cursor:
            print(i)

       elif(ch==3):
            srno = int(input("Enter Student Roll no you changes : "))
            Nrno = int(input("Enter New Student Roll no : "))
            Nname = input("Enter New Student Name : ")
            Nclass = input("Enter New Student Class : ")
            Naddress = input("Enter New Student Address : ")

            query = "update student set Srno=%s,Sname=%s,Sclass=%s,Saddress=%s where Srno=%s"
            values = [Nrno,Nname,Nclass,Naddress,srno]
            my_cursor.execute(query,values)
            conn.commit()
            print("Update Record Successfully...")

       elif(ch==4):    
            srno = int(input("Enter Student Roll no you deleted : "))
            query = "delete from student where Srno = %s"
            values = [srno]
            my_cursor.execute(query,values)   
            conn.commit()
            print(f"Roll no {srno} Student Record Deleted Successfully...")                 
   
except Error as e:
    print(f"Error {e}")

finally:

    if(conn.is_connected()):
        conn.close()
        print("Connection Close...")        