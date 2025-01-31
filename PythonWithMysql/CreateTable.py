import mysql.connector as Myconn
from mysql.connector import Error

try:

    conn = Myconn.connect(host='localhost',user='root',port=3306,password='Fardin@2121',database='ragister',auth_plugin='mysql_native_password')

    mydb = conn.cursor()
    
    mydb.execute("create table Student(Rno int auto_increment primary key,Sname text,Sclass text,Saddress text)")

    print("Table Created Successfully...")

except Error as e:
    print(e)

finally:

    if conn and conn.is_connected():
        mydb.close()
        conn.close()
        print("Cursor Close")
        print("Connection Close")        