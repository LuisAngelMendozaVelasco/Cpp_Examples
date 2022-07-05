#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {    
    float n1, n2, n3;

    cout << "Enter three numbers!" << endl;
    cout << "First number: ";
    cin >> n1;
    cout << "Second number: ";
    cin >> n2;
    cout << "Third number: ";
    cin >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout << "\nLargest number: " << n1 << endl;

    if(n2 >= n1 && n2 >= n3)
        cout << "\nLargest number: " << n2 << endl;

    if(n3 >= n1 && n3 >= n2)
        cout << "\nLargest number: " << n3 << endl;

    askOS();
    return 0;
}