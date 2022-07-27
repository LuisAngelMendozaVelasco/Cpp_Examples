/*In this example, frequency of characters in a string object is computed.
To do this, size() function is used to find the length of a string object. Then, the for loop is iterated until the end of the string.
In each iteration, occurrence of character is checked and if found, the value of count is incremented by 1.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    string str = "C++ Programming is awesome";
    char checkCharacter = 'a';
    int count = 0;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] ==  checkCharacter) {
            ++count;
        }
    }

    cout << "Number of \"" << checkCharacter << "\" in \"" << str << "\" = " << count << endl;

    askOS();
    return 0;
}