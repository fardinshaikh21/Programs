import mysql.connector as Myconn
from mysql.connector import Error

try:

    conn = Myconn.connect(host='localhost',user='root',port=3306,password='Fardin@2121',auth_plugin='mysql_native_password')

    mydb = conn.cursor()
    
    mydb.execute("show databases")
    
    for i in mydb:
        print(i)

    print(conn,"Connection Establish...")

except Error as e:
    print(e)

finally:

    if conn and conn.is_connected():
        conn.close()
        print("Connection Close")        