/*You can get the length of a string object by using a size() function or a length() function.
The size() and length() functions are just synonyms and they both do exactly same thing.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    string str = "C++ Programming";

    //You can also use str.length()
    cout << "String length of \"" << str << "\" = " << str.size() << endl;

    askOS();
    return 0;
}