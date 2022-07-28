/*When increment operator is overloaded in prefix form; Check operator ++ () is called but, 
when increment operator is overloaded in postfix form; Check operator ++ (int) is invoked.
Notice, the int inside bracket. This int gives information to the compiler that it is the postfix version of operator.
Don't confuse this int doesn't indicate integer.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

class Check {
    private:
        int i;
    public:
        Check(): i(0) {  }
        //Prefix increment
        Check operator ++ () {
            Check temp;

            temp.i = ++i;

            return temp;
        }
        //Notice int inside bracket which indicates postfix increment.
        Check operator ++ (int) {
            Check temp;

            temp.i = i++;

            return temp;
        }
        void Display() { 
            cout << "i = "<< i <<endl; 
        }
};

int main() {
    Check obj, obj1;   

    obj.Display(); 
    obj1.Display();

    //Operator function is called, only then value of obj is assigned to obj1
    obj1 = ++obj;
    obj.Display();
    obj1.Display();

    //Assigns value of obj to obj1, only then operator function is called.
    obj1 = obj++;
    obj.Display();
    obj1.Display();

    askOS();
    return 0;
}