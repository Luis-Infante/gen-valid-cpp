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
  return character[1] == '\0'
      and (character[0] >= 'A' and character[0] <= 'Z') or (character[0] >= 'a' and character[0] <= 'z');
}

bool Validation::itsAString(const string &str) {
  int size = str.size(), i = 0;
  if (size < str.max_size()) {
    while (i < size) {
      if (!(str[i] >= ' ' and str[i] <= '~')) {
        return false;
      }
      i++;
    }
    return true;
  }
  return false;
}

bool Validation::itsALetterString(const string &str) {
  int size = str.size(), i = 0;
  if (size < str.max_size()) {
    while (i < size) {
      if (!((str[i] >= 'A' and str[i] <= 'Z') or (str[i] >= 'a' and str[i] <= 'z') or (str[i] == ' '))) {
        return false;
      }
      i++;
    }
    return true;
  }
  return false;
}

bool Validation::itsANumberString(const string &str) {
  int size = str.size(), i = 0;
  if (size < str.max_size()) {
    while (i < size) {
      if (!((str[i] >= '0' and str[i] <= '9') or (str[i] == ' '))) {
        return false;
      }
      i++;
    }
    return true;
  }
  return false;
}

bool Validation::itsALetNumString(const string &str) {
  int size = str.size(), i = 0;
  if (size < str.max_size()) {
    while (i < size) {
      if (!((str[i] >= 'A' and str[i] <= 'Z') or (str[i] >= 'a' and str[i] <= 'z')
          or (str[i] >= '0' and str[i] <= '9') or (str[i] == ' '))) {
        return false;
      }
      i++;
    }
    return true;
  }
  return false;
}

bool Validation::itsAString(const int &value, const string &type, const string &str) {
  int size = str.size(), i = 0;
  if (type == "max") {
    if (size <= value) {
      while (i < size) {
        if (!(str[i] >= ' ' and str[i] <= '~')) {
          return false;
        }
        i++;
      }
      return true;
    }
  }
  if (type == "min") {
    if (size >= value and size <= str.max_size()) {
      while (i < size) {
        if (!(str[i] >= ' ' and str[i] <= '~')) {
          return false;
        }
        i++;
      }
      return true;
    }
  }
  return false;
}

bool Validation::itsAString(const int &min, const int &max, const string &str) {
  int size = str.size(), i = 0;
  if (size >= min and size <= max) {
    while (i < size) {
      if (!(str[i] >= ' ' and str[i] <= '~')) {
        return false;
      }
      i++;
    }
    return true;
  }
  return false;
}
string Validation::toUpperString(const string &str) {
  string str_1 = str;
  for (int i(0); i < str.length(); ++i) {
    str_1[i] = toupper(str_1[i]);
  }
  return str_1;
}

string Validation::toLowerString(const string &str) {
  string str_1 = str;
  for (int i(0); i < str.length(); ++i) {
    str_1[i] = tolower(str_1[i]);
  }
  return str_1;
}
