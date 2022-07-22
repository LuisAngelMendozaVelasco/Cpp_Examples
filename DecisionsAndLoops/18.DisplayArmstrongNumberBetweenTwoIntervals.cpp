//This program asks the user to enter two integers and displays all Armstrong numbers between the given interval.

#include <iostream>
#include <cmath>
#include "myFunctions.h"
using namespace std;

int main() {
    int num1, num2, i, num, digit, sum, count;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    //Swap if num1 > num2
    if (num1 > num2) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    cout << "\nArmstrong numbers between \"" << num1 << "\" and \"" << num2 << "\" are: " << endl;

    //Print Armstrong numbers from num1 to num2
    for (i = num1; i <= num2; i++) {   
        //Store value of i in num
        num = i;

        //Count gives the number of digits in i
        count = 0;
        //Count the number of digits in num and i
        while (num > 0) {
            ++count;
            num /= 10;
        }

        //Store i in num again    
        num = i;
            
        //Initialize sum to 0
        sum = 0;
        //Get sum of power of all digits of i
        while (num > 0) {
            digit = num % 10; //Remainder
            num /= 10;            
            sum = sum + pow(digit, count);
        }

        //If sum is equal to i, then it is Armstrong
        if (sum == i) {
            cout << i << ", ";
        }
    }

    cout << endl;

    askOS();
    return 0;
}
