#ifndef BOJ_4000_SRC_4806_COUNT_LINE_H_
#define BOJ_4000_SRC_4806_COUNT_LINE_H_

#include <iostream>
#include <vector>

class CountLine {
 public:
  void SetInputs() {
    std::string input;
    while (std::getline(std::cin, input)) {
      inputs.emplace_back(input);
    }
  }

  void Calculate() {}

  void PrintResult() { std::cout << inputs.size(); }

 private:
  std::vector<std::string> inputs;
};

#ifdef BOJ_SUBMIT
int main() {
  CountLine count_line;
  count_line.SetInputs();
  count_line.Calculate();
  count_line.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4806_COUNT_LINE_H_
