/*This program takes an arithmetic operator (+, -, *, /) and two operands from a user and performs the operation 
on those two operands depending upon the operator entered by the user.*/

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "\nEnter first operand: ";
    cin >> num1;
    cout << "Enter second operand: ";
    cin >> num2;

    switch(op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;

    default:
        //If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct" << endl;
        break;
    }

    askOS();
    return 0;
}
