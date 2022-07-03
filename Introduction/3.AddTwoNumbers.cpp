//The user is asked to enter two integers. 
//These two integers are stored in variables first_number and second_number respectively.
//Then, the variables are added using the + operator and stored in the sum variable.

#include <iostream>
using namespace std;

int main() {
  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // Sum of two numbers
  sum = first_number + second_number;

  // Print result
  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}