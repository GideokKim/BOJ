#ifndef BOJ_4000_SRC_4470_LINE_NUMBERS_H_
#define BOJ_4000_SRC_4470_LINE_NUMBERS_H_

#include <iostream>
#include <string>
#include <vector>

class LineNumbers {
 public:
  void SetInputs() {
    size_t count;
    std::cin >> count;
    std::cin.ignore();

    lines.resize(count);
    for (size_t i = 0; i < count; ++i) {
      std::getline(std::cin, lines[i]);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < lines.size(); ++i) {
      std::cout << i + 1 << ". " << lines[i] << "\n";
    }
  }

 private:
  std::vector<std::string> lines;
};

#ifdef BOJ_SUBMIT
int main() {
  LineNumbers line_numbers;
  line_numbers.SetInputs();
  line_numbers.Calculate();
  line_numbers.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4470_LINE_NUMBERS_H_
