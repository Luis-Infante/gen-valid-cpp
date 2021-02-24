//
// Created by Luis Infante on 18/02/2021.
//

#ifndef VALIDNFAKEDATA_VALIDATION_H
#define VALIDNFAKEDATA_VALIDATION_H

#include <iostream>
#include <climits>
#include <limits>
#include <string>

using namespace std;

class Validation {
public:
  static bool itsADigit(const int &);
  static bool itsADigit(const char &);
  static bool itsADigit(const string &);
  static bool itsACharacter(const char &);
  static bool itsACharacter(const string &);
  static bool itsLetterCharacter(const char &);
  static bool itsLetterCharacter(const string &);
  static bool itsAString(const string &);
  static bool itsAString(const int &, const string &, const string &);
  static bool itsAString(const int &, const int &, const string &);
};

#endif  // VALIDNFAKEDATA_VALIDATION_H