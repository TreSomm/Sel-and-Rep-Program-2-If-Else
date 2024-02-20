
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num1, num2, type, final;

    cout << "Please input the first number: ";
    cin >> num1;

    cout << "Please input the second number: ";
    cin >> num2;

    cout << "Please input 1 = Addition, 2 = Subtraction, or 3 = Multiply: ";
    cin >> type;


    if (type == 1) {
        final = num1 + num2;
        cout << num1 << " + " << num2 << " = " << final;
    }
    else if (type == 2) {
        final = num1 - num2;
        cout << num1 << " - " << num2 << " = " << final;
    }
    else { 
        final = num1 * num2;
        cout << num1 << " * " << num2 << " = " << final;
    }
}
