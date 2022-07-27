/*This program declares the array of five element and the elements of that array are accessed using pointer.
In C++, pointers are variables that store the memory addresses of other variables.
If we have a variable var in our program, &var will give us its address in the memory.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int data[5];

    cout << "Enter elements: " << endl;

    for(int i = 0; i < 5; ++i) {
        cout << i+1 << ". ";
        cin >> data[i];
    }

    cout << "\nYou entered: " << endl;
    for(int i = 0; i < 5; ++i) {
        cout << data << endl;
        cout << "\n" << i+1 << ". " << *(data + i); //data is the address of the first element stored in data array (data[0])
    }

    cout << endl;

    askOS();
    return 0;
}

/*Common mistakes when working with pointers
Suppose, we want a pointer varPoint to point to the address of var. Then,

int var, *varPoint;

// Wrong! 
// varPoint is an address but var is not
varPoint = var;

// Wrong!
// &var is an address
// *varPoint is the value stored in &var
*varPoint = &var;

// Correct! 
// varPoint is an address and so is &var
varPoint = &var;

 // Correct!
// both *varPoint and var are values
*varPoint = var;*/