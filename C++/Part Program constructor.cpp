#include<iostream>
using namespace std;

class Part
{
  string p_name ;
  int p_id,p_prize;
  public:
  
  Part(string name,int id,int prize )
  {
     p_name = name;
     p_id = id;
     p_prize = prize;
  }
  
  Part(Part &o1)
  {
    p_name = o1.p_name;
    p_id = o1.p_id;
    p_prize = o1.p_prize;
  }
  
  void display ()
  {
    cout << "\n\nPart name is : "<<p_name<< endl;
    cout << "Part I'd  is : "<<p_id<< endl;
    cout << "Part Prize is : "<<p_prize<<"Rs"<< endl;
  }
};


int main()
{
    string p_name ;
    int p_id , p_prize;
     
    cout << "Enter Part Name : ";
    cin>>p_name;
    cout << "Enter Part I'd : ";
    cin>>p_id;
    cout << "Enter Part Prize : ";
    cin>>p_prize;
    
    Part p1(p_name,p_id,p_prize);
    p1.display();
    
   // Part p2("Fardin",102,10000);
    Part p2(p1);
    p2.display();
  
    return 0;
}