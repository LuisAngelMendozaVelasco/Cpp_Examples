/*In this program, user is asked to enter two numbers (floating point numbers). 
Then, the product of those two numbers is stored in a variable and displayed on the screen.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    double num1, num2, product;

    cout << "Enter two numbers!" << endl;
    //Stores two floating point numbers in num1 and num2 respectively
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2; 

    product = num1 * num2;  //Performs multiplication and stores the result in product variable
    cout << "\nProduct = " << product << endl;    

    askOS();
    return 0;
}