#ifndef BOJ_17000_SRC_17608_BAR_H_
#define BOJ_17000_SRC_17608_BAR_H_

#include <iostream>
#include <stack>

class Bar {
 public:
  void SetInputs() {
    int n;
    std::cin >> n;

    int input;
    for (int i = 0; i < n; ++i) {
      std::cin >> input;
      bar_stack.push(input);
    }
  }

  void Calculate() {
    int stack_size = bar_stack.size();
    int max_height = 0;
    count = 0;

    for (size_t i = 0; i < stack_size; ++i) {
      if (bar_stack.top() > max_height) {
        count++;
        max_height = bar_stack.top();
      }
      bar_stack.pop();
    }
  }

  void PrintResult() { std::cout << count; }

 private:
  std::stack<int> bar_stack;
  int count;
};

#ifdef BOJ_SUBMIT
int main() {
  Bar bar;
  bar.SetInputs();
  bar.Calculate();
  bar.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17608_BAR_H_
