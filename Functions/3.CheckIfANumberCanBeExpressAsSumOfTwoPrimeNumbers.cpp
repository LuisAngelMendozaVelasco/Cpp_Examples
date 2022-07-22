/*This program takes a positive integer from the user and checks whether that number can be expressed as the sum of two prime numbers.
If the number can be expressed as the sum of two prime numbers, the output shows the combination of the prime numbers.
To perform this task, a user-defined function is created to check prime number.*/

#include <iostream>
#include "myFunctions.h"
using namespace std;

bool check_prime(int n);

int main() {
    int n, i;
    bool flag = false, first_pair = true; //Determine if a number can be expressed as sum of two prime numbers

    cout << "Enter a positive integer: ";
    cin >> n;

    for(i = 2; i <= n/2; ++i) {
        if(check_prime(i)) {
            if(check_prime(n - i)) {
                if(first_pair) {
                    cout << "\n" << n << " = " << i << " + " << n-i << endl;
                    first_pair = false;
                }
                else {
                    cout << n << " = " << i << " + " << n-i << endl;
                }
                flag = true;
            }
        }
    }

    if(!flag) {
        cout << n << " can't be expressed as sum of two prime numbers!" << endl;
    }

    askOS();
    return 0;
}

//Check prime number
bool check_prime(int n) {
    int i;
    bool is_prime = true;

    //0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for(i = 2; i <= n/2; ++i) {
        if(n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}
