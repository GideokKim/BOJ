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
  }

  void Calculate() {
    std::string input;
    for (size_t i = 0; i < result.size(); i++) {
      std::cin >> input;
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
  }

  void PrintResult() {
    for (const auto& answer : result) {
      std::cout << (answer ? "YES" : "NO") << std::endl;
    }
  }

 private:
  std::vector<bool> result;
};

#ifdef BOJ_SUBMIT
int main() {
  Parenthesis parenthesis;
  parenthesis.SetInputs();
  parenthesis.Calculate();
  parenthesis.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9012_PARENTHESIS_H_
