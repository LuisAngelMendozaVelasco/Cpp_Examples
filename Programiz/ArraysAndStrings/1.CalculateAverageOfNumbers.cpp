/*This program takes n number of element from user (where, n is specified by user), 
stores data in an array and calculates the average of those numbers.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int n, i;
    float num[100], sum=0.0, average;

    cout << "Enter the number of data: ";
    cin >> n;

    while (n > 100 || n <= 0) {
        cout << "\nError! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    cout << endl;

    for(i = 0; i < n; ++i) {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "\nAverage = " << average << endl;

    askOS();
    return 0;
}