#ifndef BOJ_1000_SRC_1541_LOST_PARENTHESIS_H_
#define BOJ_1000_SRC_1541_LOST_PARENTHESIS_H_

#include <string>

int check_lost_parenthesis(std::string expression);

#ifdef BOJ_SUBMIT
// 백준 제출용 main 함수
#include <iostream>
#include <string>

int main() {
  std::string expression;
  std::cin >> expression;
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

  std::cout << result << std::endl;
  return 0;
}
#endif  // BOJ_SUBMIT2

#ifdef BOJ_SUBMIT2
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string expression;
  std::cin >> expression;
  std::vector<int> numbers;
  std::vector<char> operators;

  std::string num;
  for (char c : expression) {
    if (c == '+' || c == '-') {
      numbers.push_back(std::stoi(num));
      operators.push_back(c);
      num.clear();
    } else {
      num += c;
    }
  }
  numbers.push_back(std::stoi(num));

  int result = numbers[0];
  bool found_minus = false;
  int temp_sum = 0;

  for (size_t i = 0; i < operators.size(); i++) {
    if (operators[i] == '-') {
      found_minus = true;
      result -= temp_sum;
      temp_sum = numbers[i + 1];
    } else if (found_minus) {
      temp_sum += numbers[i + 1];
    } else {
      result += numbers[i + 1];
    }
  }

  if (found_minus) {
    result -= temp_sum;
  }

  std::cout << result << std::endl;
  return 0;
}
#endif  // BOJ_SUBMIT2

#endif  // BOJ_1000_SRC_1541_LOST_PARENTHESIS_H_