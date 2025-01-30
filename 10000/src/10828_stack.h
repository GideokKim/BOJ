#ifndef BOJ_10000_SRC_10828_STACK_H_
#define BOJ_10000_SRC_10828_STACK_H_

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

class Stack {
 public:
  void SetInputs() {
    std::cin >> n;
    std::cin.ignore();
  }

  void Calculate() {
    results.clear();
    std::string command;
    for (int i = 0; i < n; ++i) {
      std::cin >> command;
      if (command == "top") {
        if (integer_stack.empty()) {
          results.push_back(-1);
        } else {
          results.push_back(integer_stack.top());
        }
      } else if (command == "size") {
        results.push_back(integer_stack.size());
      } else if (command == "empty") {
        results.push_back(integer_stack.empty());
      } else if (command == "pop") {
        if (integer_stack.empty()) {
          results.push_back(-1);
        } else {
          results.push_back(integer_stack.top());
          integer_stack.pop();
        }
      } else if (command == "push") {
        int x;
        std::cin >> x;
        integer_stack.push(x);
      }
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  std::stack<int> integer_stack;
  int n;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Stack stack;
  stack.SetInputs();
  stack.Calculate();
  stack.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10828_STACK_H_
