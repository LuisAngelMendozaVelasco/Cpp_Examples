/*Example to find the sum of natural numbers by using a recursive function.
A function that calls itself is known as a recursive function. And, this technique is known as recursion.*/

#include<iostream>
#include "../myFunctions.h"
using namespace std;

int add(int n);

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "\nSum =  " << add(n) << endl;

    askOS();
    return 0;
}

int add(int n) {
    if(n != 0) {
        return n + add(n - 1);
    }  
    return 0;
}

/*In this program, the number entered by the user is passed to the add() function.
Suppose, 10 is entered by the user. Now, 10 is passed to the add() function. This function adds 10 to the addition result of 9 (10 - 1 = 9).
Next time, 9 is added to the addition result of 8 (9 - 1 = 8). This goes on until the number reaches 0, when the function returns 0.
Now, every function is returned to calculate the end result: 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55.*/