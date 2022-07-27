/*In this example, if...else statement is used to check whether an alphabet entered by the user is a vowel or a constant.
Five alphabets a, e, i, o and u are known as vowels. All other alphabets except these 5 alphabets are known as consonants.
This program assumes that the user will always enter an alphabet.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    //Evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    //Evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    //Show error message if c is not an alphabet
    if (!isalpha(c)) //The isalpha() function checks whether the character entered is an alphabet or not.
        cout << "Error, non-alphabetic character!" << endl;
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << "\"" << c << "\" is a vowel!" << endl;
    else
        cout << "\"" << c << "\" is a consonant!" << endl;

    askOS();
    return 0;
}