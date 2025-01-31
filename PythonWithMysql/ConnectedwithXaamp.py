import mysql.connector as Myconn
from mysql.connector import Error

try:
    
    conn = Myconn.connect(host='localhost',user='root',port=3307,password='',database='project')
    
    mydb = conn.cursor()

    #mydb.execute("create table users(Username text not null,Email text not null,Password text not null)")

   # mydb.execute("drop table users")
    print("Create Table Successfully...")
    
   # if conn.is_connected():
   #  print("Connection successful")
    
except Error as e:

    print(f"Error: {e}")

finally:
    if conn.is_connected():
        conn.close()
        print("Connection closed")
