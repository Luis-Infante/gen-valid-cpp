//
// Created by Luis Infante on 18/02/2021.
//

#include "validation.h"

bool Validation::itsADigit(const int &digit) {
  int size = to_string(digit).size();
  return size == 1 and digit > 0 && digit < 9;
}

bool Validation::itsADigit(const char &digit) {
  return digit > '0' and digit < '9';
}

bool Validation::itsADigit(const string &digit) {
  return digit[1] == '\0' and digit[0] > '0' and digit[0] <= '9';
}

bool Validation::itsACharacter(const char &character) {
  return character >= ' ' and character <= '~';
}

bool Validation::itsACharacter(const string &character) {
  return character[1] == '\0' and character[0] >= ' ' and character[0] <= '~';
}

bool Validation::itsLetterCharacter(const char &character) {
  return (character >= 'A' and character <= 'Z') or (character >= 'a' and character <= 'z');
}

bool Validation::itsLetterCharacter(const string &character) {
  return character[1] == '\0' and (character[0] >= 'A' and character[0] <= 'Z') or (character[0] >= 'a' and character[0] <= 'z');
}