#ifndef BOJ_28000_SRC_28278_STACK2_H_
#define BOJ_28000_SRC_28278_STACK2_H_

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

class Stack2 {
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
      if (command == "5") {
        if (integer_stack.empty()) {
          results.push_back(-1);
        } else {
          results.push_back(integer_stack.top());
        }
      } else if (command == "3") {
        results.push_back(integer_stack.size());
      } else if (command == "4") {
        results.push_back(integer_stack.empty());
      } else if (command == "2") {
        if (integer_stack.empty()) {
          results.push_back(-1);
        } else {
          results.push_back(integer_stack.top());
          integer_stack.pop();
        }
      } else if (command == "1") {
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
  Stack2 stack2;
  stack2.SetInputs();
  stack2.Calculate();
  stack2.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28278_STACK2_H_
