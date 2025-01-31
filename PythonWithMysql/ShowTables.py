import mysql.connector as Myconn
from mysql.connector import Error

try:

    conn = Myconn.connect(host='localhost',user='root',port=3306,password='Fardin@2121',database='ragister',auth_plugin='mysql_native_password')

    mydb = conn.cursor()
    
    mydb.execute("show tables")

    for i in mydb:
        print(i)

except Error as e:
    print(e)

finally:

    if conn and conn.is_connected():
        conn.close()
        print("Connection Close")        