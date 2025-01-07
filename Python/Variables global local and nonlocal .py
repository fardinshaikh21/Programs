a = 10
print(a)

def outer():
    
    """
    global a
    a = a + 20
    print(a)
    """
    
    a = 40
    
    def inner():
        """nonlocal a
        a = a + 20
        print(a)"""
        
        
        global a
        a = a + 20
        print(a)
        
        
        a = 30
        print(a)
        
    inner()
    
outer()    
    
        
