#include <iostream>
#include "../myFunctions.h"
using namespace std;

class Check {
    private:
        int i;
    public:
        Check(): i(0) {  }
        //Overload ++ when used as prefix
        Check operator ++() {
            Check temp;
            //Here, i is the value attribute of the calling object
            temp.i = ++i;
            /*The return type of operator function is Check in this case which allows to use both codes ++obj; obj1 = ++obj;. 
            It is because, temp returned from operator function is stored in object obj.
            Since, the return type of operator function is Check, you can also assign the value of obj to another object.*/
            return temp; //Return type is Check
        }
        void Display() { 
            cout << "i = " << i << endl; 
        }
};

int main() {
    Check obj, obj1;

    obj.Display();
    obj1.Display();

    obj1 = ++obj;

    obj.Display();
    obj1.Display();

    askOS();
    return 0;
}