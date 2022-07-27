/*This program takes a sentence from user and reverses that sentence using recursion. 
This program does not use string to reverse the sentence or store the sentence.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

//A reference to a string object whose contents will not be changed. To pass a string by reference, you use the data type string&.
void reverse(const string& a); 

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str); //Sentence input

    //Function call
    cout << "\nReversed sentence: ";
    reverse(str);

    askOS();
    return 0;    
}

//Function definition
void reverse(const string& str) {
    //Store the size of the string
    size_t numOfChars = str.size(); //size_t is the unsigned integer type of the result of the sizeof operator

    if(numOfChars == 1) {
        cout << str << endl;
    }
    else {
        cout << str[numOfChars - 1];
        //Function recursion
        reverse(str.substr(0, numOfChars - 1));  //Returns a newly constructed string object with its value initialized to a copy of a substring of this object.
    }
}