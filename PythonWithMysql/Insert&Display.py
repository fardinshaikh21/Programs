import mysql.connector as Myconn
from mysql.connector import Error

try:

    conn = Myconn.connect(host='localhost',user='root',port=3306,password='Fardin@2121',database='ragister',auth_plugin='mysql_native_password')

    mydb = conn.cursor()
    
    n = int(input("Enter How Many Student Details : "))

    for i in range(n):
       
        rno = int(input("Enter Student Roll no : "))
        sname = input("Enter Student Name : ")
        sclass = input("Enter Student Class : ")
        saddress = input("Enter Student Address : ")

        query = "insert into student(Rno,Sname,Sclass,Saddress) values (%s, %s, %s, %s)"
        values = (rno, sname, sclass, saddress)
        mydb.execute(query, values)

    print(f"{n} records inserted successfully...")

    mydb.execute("select * from student")

    for i in mydb.fetchall():
       print(i)

    conn.commit()

except Error as e:
    print(e)

finally:

    if conn.is_connected(): 
        mydb.close() 
        conn.close()
        print("Cursor and Connection closed.")  