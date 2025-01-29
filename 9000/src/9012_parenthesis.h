#ifndef BOJ_9000_SRC_9012_PARENTHESIS_H_
#define BOJ_9000_SRC_9012_PARENTHESIS_H_

#include <iostream>
#include <stack>
#include <string>
#include <vector>

class Parenthesis {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    result.resize(t, true);

    std::string input;
    for (size_t i = 0; i < t; i++) {
      std::cin >> input;
      CheckParenthesis(input, i);
    }
  }

  void PrintResult() {
    for (const auto& answer : result) {
      std::cout << (answer ? "YES" : "NO") << std::endl;
    }
  }

 private:
  void CheckParenthesis(const std::string& input, size_t i) {
    std::stack<char> parenthesis_stack;
    for (const auto& c : input) {
      if (c == '(') {
        parenthesis_stack.push(c);
      } else if (c == ')') {
        if (parenthesis_stack.empty()) {
          result[i] = false;
          break;
        }
        parenthesis_stack.pop();
      }
    }
    if (!parenthesis_stack.empty()) {
      result[i] = false;
    }
  }
  std::vector<bool> result;
};

#ifdef BOJ_SUBMIT
int main() {
  Parenthesis parenthesis;
  parenthesis.SetInputs();
  parenthesis.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9012_PARENTHESIS_H_
