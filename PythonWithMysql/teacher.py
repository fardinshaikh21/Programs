import mysql.connector as Myconn
from mysql.connector import Error

try: 
    
    conn = Myconn.connect(host="localhost",user="root",password="Fardin@2121",port=3306,database="project",auth_plugin="mysql_native_password")

    my_cursor = conn.cursor()

    #if(conn.is_connected()):
      # print("Connection Establish....")

    #my_cursor.execute("create table Teacher(Tid int,Tname text,Taddress text)")
    #print("Table Create Successfully...")

    n = int(input("Enter How Many Teacher Value Insert : "))

    for i in range(n):
        
        tid = int(input("Enter Teacher Id : "))
        tname = input("Enter Teacher Name : ")
        taddress = input("Enter Teacher Address : ")

        #this query is not work
        #my_cursor.execute("insert into teacher values(tid,tname,taddress)")

        query = "insert into teacher values(%s,%s,%s)"
        values = [tid,tname,taddress]

        my_cursor.execute(query,values)
        
    
    conn.commit()
    print(f"Total {n} Record Insert Successfully...")    
   
except Error as e:
    print(f"Error {e}") 

finally:

    if(conn.is_connected()):
        conn.close()           