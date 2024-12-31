class University{
    
    String Uname;
    
    University(String Uname){
        this.Uname = Uname;
    }
    
    void Display(){
        System.out.println("University Name is : "+this.Uname);
        
    }
}

class College extends University{
    
    String Cname;
    
    College(String Uname,String Cname){
        super(Uname);
        this.Cname = Cname;
    }
    
    void Display(){
        super.Display();
        System.out.println("College Name is : "+this.Cname);
    }
}

class Department extends College{
    String Dname;
    
    Department(String Uname,String Cname,String Dname){
        super(Uname,Cname);
        this.Dname = Dname;
    }
    
    void Display(){
        super.Display();
        System.out.println("Department Name is : "+this.Dname);
    }
}
class CollegeInheriance {
    
    public static void main(String[] args) {
        
        Department d = new Department("SavitriBai Phule","Abeda Inamdar","Bca Science");
        d.Display();
    }
    
}