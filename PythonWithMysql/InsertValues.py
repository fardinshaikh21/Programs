import mysql.connector as Myconn
from mysql.connector import Error

try:

    conn = Myconn.connect(host='localhost',user='root',port=3306,password='Fardin@2121',database='ragister',auth_plugin='mysql_native_password')

    mydb = conn.cursor()
    
    mydb.execute("insert into student values(2,'Nizam','Tybca','RaviPark')")
    conn.commit()

    print(mydb.rowcount,"Insert Value Successfully...")

except Error as e:
    print(e)

finally:

    if conn and conn.is_connected():
        mydb.close()
        conn.close()
        print("Cursor Close")
        print("Connection Close")        