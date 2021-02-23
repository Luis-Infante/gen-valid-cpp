#include <iostream>
#include "validation.h"

using namespace std;

int main() {
  ///Digit Validation

  //Validation with int
  int int_test(5);
  cout << "Digit:" << int_test << ", Response: " << Validation::itsADigit(int_test) << endl;
  int_test = 55;
  cout << "Digit:" << int_test << ", Response: " << Validation::itsADigit(int_test) << endl;

  //Validation with char
  char char_test('5');
  cout << "Digit:" << char_test << ", Response: " << Validation::itsADigit(char_test) << endl;
  char_test = 'A';
  cout << "Digit:" << char_test << ", Response: " << Validation::itsADigit(char_test) << endl;

  /* When the user is free to enter any value, you can use the following string validation and then assign in to
   * the correct variable and avoid any unexpected mistakes. */
  string string_test("9");
  if (Validation::itsADigit(string_test)) {
    cout << "The digit: " << string_test << " will be assigned correctly" << endl;
    int_test = stoi(string_test);
    char_test = string_test[0];
  } else {
    cout << "The digit is not valid" << endl;
  }

  /// Char Validation
  //Validates ASCII characters from 32 to 126 with char
  char_test = 'F';
  cout << "The character: " << char_test << ", Response: " << Validation::itsACharacter(char_test) << endl;

  //Validates only letter with char
  cout << "The character: " << char_test << ", Response: " << Validation::itsLetterCharacter(char_test) << endl;
  char_test = '9';
  cout << "The character: " << char_test << ", Response: " << Validation::itsLetterCharacter(char_test) << endl;

  /* When the user is free to enter any value, you can use the following string validation and then assign in to
   * the correct variable and avoid any unexpected mistakes. */
  string_test = "Aa";
  if (Validation::itsACharacter(string_test)){
    cout << "The character: " << string_test << " will be assigned correctly" << endl;
    char_test = string_test[0];
  } else {
    cout << "The character is not valid" << endl;
  }

  string_test = "Aa";
  if (Validation::itsLetterCharacter(string_test)){
    cout << "The letter: " << string_test << " will be assigned correctly" << endl;
    char_test = string_test[0];
  } else {
    cout << "The letter is not valid" << endl;
  }

  return 0;
}
