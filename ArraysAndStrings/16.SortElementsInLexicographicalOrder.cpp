/*This program takes 10 words from the user and sorts them in lexicographical order.
We have used the bubble sort algorithm in this program.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    string str[10], temp;

    cout << "Enter 10 words: " << endl;
    for(int i = 0; i < 10; ++i) {
        cout << i+1 << ". ";
        getline(cin, str[i]);
    }

    //Use Bubble Sort to arrange words
    for(int i = 0; i < 9; ++i) {
        for(int j = 0; j < 9 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "\nIn lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i) {
        cout << i+1 << ". " << str[i] << endl;
    }

    askOS();
    return 0;
}