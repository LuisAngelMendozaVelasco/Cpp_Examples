/*Calculate GCD of two integers (for both positive and negative integers) using loops and decision making statements.
The largest integer which can perfectly divide two integers is known as GCD or HCF of those two numbers.
For example, the GCD of 4 and 10 is 2 since it is the largest integer that can divide both 4 and 10.*/

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int n1, n2, hcf;

    cout << "Enter two numbers!" << endl;
    cout << "First number: ";
    cin >> n1;
    cout << "Second number: ";
    cin >> n2;

    //Swapping variables n1 and n2 if n2 is greater than n1.
    if (n2 > n1) {   
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
            hcf = i;
        }
    }
        
    cout << "\nHCF = " << hcf << endl;

    askOS();
    return 0;
}