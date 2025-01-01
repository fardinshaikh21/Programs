#include <iostream>
using namespace std;

class Circle
 {
   private:
    double radius;
    double pi;

    public:
    // Parameterized constructor with default value for pi
    Circle(double r, double pi = 3.14159)
    {
        radius = r;
        this->pi = pi;
    }

    // Function to calculate the area of the circle
    double calculateArea() 
    {
       return pi * radius * radius;
    }
};

int main()
 {
    double radius;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Create an instance of the Circle class with default pi value
    Circle circle(radius);

    cout << "Area of the circle is: " << circle.calculateArea() << endl;

    return 0;
}
