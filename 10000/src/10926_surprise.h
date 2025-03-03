#ifndef BOJ_10000_SRC_10926_SURPRISE_H_
#define BOJ_10000_SRC_10926_SURPRISE_H_

#include <iostream>
#include <string>

class Surprise {
 public:
  void SetInputs() { std::cin >> input_string; }

  void Calculate() { result = input_string + "??!"; }

  void PrintResult() { std::cout << result; }

 private:
  std::string input_string;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Surprise surprise;
  surprise.SetInputs();
  surprise.Calculate();
  surprise.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10926_SURPRISE_H_
