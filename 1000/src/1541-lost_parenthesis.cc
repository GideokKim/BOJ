#include "1541-lost_parenthesis.h"

#include <iostream>

int check_lost_parenthesis(std::string expression) {
  int result = 0;

  if (expression.find('-') != std::string::npos) {
    int minus_index = expression.find('-');

    while (expression.find('+', minus_index) != std::string::npos &&
           expression.find('+', minus_index) > minus_index) {
      int plus_index = expression.find('+', minus_index);
      expression.replace(plus_index, 1, "-");
    }

    while (expression.find('+') != std::string::npos) {
      int plus_index = expression.find('+');
      result += std::stoi(expression.substr(0, plus_index));
      expression = expression.substr(plus_index + 1);
    }

    minus_index = expression.find('-');
    result += std::stoi(expression.substr(0, minus_index));
    expression = expression.substr(minus_index + 1);

    while (expression.find('-') != std::string::npos) {
      minus_index = expression.find('-');
      result -= std::stoi(expression.substr(0, minus_index));
      expression = expression.substr(minus_index + 1);
    }
    result -= std::stoi(expression);
  } else {
    while (expression.find('+') != std::string::npos) {
      int plus_index = expression.find('+');
      result += std::stoi(expression.substr(0, plus_index));
      expression = expression.substr(plus_index + 1);
    }
    result += std::stoi(expression);
  }

  return result;
}
