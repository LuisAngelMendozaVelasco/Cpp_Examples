/*This program takes an integer from user and that integer is reversed.
If the reversed integer is equal to the integer entered by user then, 
that number is a palindrome if not that number is not a palindrome.*/

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int n, num, digit, rev = 0;

    cout << "Enter a positive number: ";
    cin >> num;
    n = num;

    //Reverse number
    do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << "\nThe reverse of the number is: " << rev << endl;

    //Compare entered number and reversed number
    if (n == rev) {
        cout << "The number is a palindrome!" << endl;
    }  
    else {
        cout << "The number is not a palindrome!" << endl;
    }
        
    askOS();
    return 0;
}