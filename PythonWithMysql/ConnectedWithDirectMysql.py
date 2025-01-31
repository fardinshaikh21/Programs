import mysql.connector as Myconn
from mysql.connector import Error

try:
    
    conn = Myconn.connect(host='localhost',user='root',password='Fardin@2121',auth_plugin='mysql_native_password')
    
    if conn.is_connected():
        print("Connection successful")

except Error as e:
    print(f"Error: {e}")

finally:
    if conn and conn.is_connected():
        conn.close()
        print("Connection closed")
