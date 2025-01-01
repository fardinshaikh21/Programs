#include <iostream>
using namespace std;

void smallzero(int &a, int &b)
 {
    if (a < b) 
    {
        a = 0;
    }
     else
    {
        b = 0;
    }
 }

int main() 
{
    int num1, num2;

     cout << "Enter the first number: ";
     cin >> num1;

     cout << "Enter the second number: ";
     cin >> num2;

     cout << "\nOriginal numbers: num1 = "<< num1 << ", num2 = " << num2 <<endl;
    
     smallzero(num1, num2);

     cout << "\nModified numbers: num1 = " << num1 << ", num2 = " << num2 <<endl;

    return 0;
}
    