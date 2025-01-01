#include <iostream>

using namespace std;

class calculator
{
    float n1, n2;
    char o;
public:
    void getnum(){
    cout << "Enter two number" << endl<<"Number 1: ";
    cin >> n1;
    cout << "Number 2: ";
    cin >> n2;
    }
    void cal()
    {
        int x = 1;
        while (x < 5)
        {
            cout << "Enter operator from the following\n";
            cout << "\taddition ( + )\n\tsubstraction ( - )\n\tMultiplication ( * )\n\tDivision ( / )\n";
            cin >> o;
            if (o == '+')
            {
                add();
                break;
            }
            else if (o == '-')
            {
                sub();
                break;
            }
            else if (o == '*')
            {
                mul();
                break;
            }
            else if (o == '/')
            {
                div();
                break;
            }
            else
            {
                cout << " invalid Input!" << endl;
            }
            x++;
        }
    }
    void add()
    {
        cout << "Addition of " << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    }
    void sub()
    {
        cout << "Substraction of " << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    }
    void mul()
    {
        cout << "Muliplication of " << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    }
    void div()
    {
        if(n1 == 0 || n2 == 0){
            cout<<"No zero in division\n";
            return;
        }
        cout << "Division of " << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    }
};

int main()
{
    int end;
    int x = 1;
    calculator c;
    cout << "\u001b[32mWelcome to The Calculator\u001b[0m" << endl;
    while (1)
    {
        c.getnum();
        c.cal();
        cout << "\u001b[31m enter 1 to continue or any key to exit:\u001b[0m";
        cin >> end;
        if (end != 1)
        {
            break;
        }
    }

    return 0;
}