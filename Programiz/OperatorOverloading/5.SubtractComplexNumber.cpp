/*In this program, three objects of type Complex are created and user is asked to enter the real and imaginary parts for two complex numbers which are stored in objects c1 and c2.
Then statement result = c1 - c2 is executed. This statement invokes the operator function Complex operator - (Complex c2).
When result = c1 - c2 is executed, c2 is passed as argument to the operator function.
In case of operator overloading of binary operators in C++ programming, the object on right hand side of operator is always assumed as argument by compiler.
Then, this function returns the resultant complex number (object) to main() function which is displayed on to the screen.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(): real(0), imag(0) {  }
        void input() {
            cout << "Real part: ";
            cin >> real;
            cout << "Imaginary part: ";
            cin >> imag;
        }
        //Operator overloading
        Complex operator - (Complex c2) {
            Complex temp;

            temp.real = real - c2.real;
            temp.imag = imag - c2.imag;

            return temp;
        }
        void output() {
            if(imag < 0) {
                cout << "\nOutput complex number: " << real << imag << "i" << endl;
            }
            else {
                cout << "\nOutput complex number: " << real << "+" << imag << "i" << endl;
            }
        }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number!" << endl;
    c1.input();

    cout << "\nEnter second complex number!" << endl;
    c2.input();

    //In case of operator overloading of binary operators in C++ programming, the object on right hand side of operator is always assumed as argument by compiler.
    result = c1 - c2;
    result.output();

    askOS();
    return 0;
}