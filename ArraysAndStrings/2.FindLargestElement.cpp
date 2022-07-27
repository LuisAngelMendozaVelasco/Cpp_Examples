/*This program takes n number of element from user(where, n is specified by user) 
and stores data in an array. Then, this program displays the largest element of that array using loops.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int i, n;
    float arr[100];

    cout << "Enter total number of elements (1 to 100): ";
    cin >> n;

    //Store number entered by the user
    for(i = 0; i < n; ++i) {
        cout << i + 1 << ". Enter number: ";
        cin >> arr[i];
    }

    //Loop to store largest number to arr[0]
    for(i = 1; i < n; ++i) {
        // Change < to > if you want to find the smallest element
        if(arr[0] < arr[i]) {
            arr[0] = arr[i];
        }    
    }

    cout << "\nLargest element = " << arr[0] << endl;

    askOS();
    return 0;
}
