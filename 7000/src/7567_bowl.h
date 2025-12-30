#ifndef BOJ_7000_SRC_7567_BOWL_H_
#define BOJ_7000_SRC_7567_BOWL_H_

#include <iostream>
#include <string>

class Bowl {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = 10;
    char front = input[0];
    char back;
    for (size_t i = 1; i < input.size(); ++i) {
      back = input[i];
      if (front == back) {
        result += 5;
      } else {
        result += 10;
      }
      front = back;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Bowl bowl;
  bowl.SetInputs();
  bowl.Calculate();
  bowl.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_7000_SRC_7567_BOWL_H_
