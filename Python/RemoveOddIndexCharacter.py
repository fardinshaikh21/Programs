def Remove(str):
    
    print("Before Remove Odd Index Character String is : ")  
    print(str) 
    char = ""
    
    for i in range(len(str)):       
        if(i%2==0):
            char += str[i]
    print("After Remove Odd Index Character String is : ")  
    print(char)    


def Remove1(str):   
    print(str[::2])
    
s = input("Enter the String : ")
Remove(s)
#Remove1(s)

