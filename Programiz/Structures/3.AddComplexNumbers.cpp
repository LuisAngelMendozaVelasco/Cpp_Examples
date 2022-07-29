//This program takes two complex numbers as structures and adds them with the use of functions.

#include <iostream>
#include "../myFunctions.h"
using namespace std;

/*typedef is used to create an additional name (alias) for another data type, but does not create a new type, except in the obscure 
case of a qualified typedef of an array type where the typedef qualifiers are transferred to the array element type.*/
typedef struct complex {
    float real;
    float imag;
} complexNumber;

complexNumber addComplexNumbers(complex, complex);

int main() {
    complexNumber num1, num2, complexSum;
    string signOfImag;

    cout << "Enter 1st complex number!" << endl;
    cout << "Real part: ";
    cin >> num1.real;
    cout << "Imaginary part: ";
    cin >> num1.imag;
    cout << "\nEnter 2nd complex number!" << endl;
    cout << "Real part: ";
    cin >> num2.real;
    cout << "Imaginary part: ";
    cin >> num2.imag;

    //Call add function and store result in complexSum
    complexSum = addComplexNumbers(num1, num2);

    //Use Ternary Operator to check the sign of the imaginary number
    signOfImag = (complexSum.imag > 0) ? " + " : " - ";

    //Use Ternary Operator to adjust the sign of the imaginary number (make positive the imaginary part)
    complexSum.imag = (complexSum.imag > 0) ? complexSum.imag : -complexSum.imag;

    cout << "Sum = " << complexSum.real << signOfImag << complexSum.imag << "i" << endl;

    askOS();
    return 0;
}

complexNumber addComplexNumbers(complex num1, complex num2) {
    complex temp;

    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;

    return temp;
}
