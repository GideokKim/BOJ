#ifndef BOJ_11000_SRC_11719_PRINT_AS_IT_IS_2_H_
#define BOJ_11000_SRC_11719_PRINT_AS_IT_IS_2_H_

#include <iostream>
#include <string>
#include <vector>

class PrintAsItIs2 {
 public:
  void SetInputs() {
    std::string line;
    while (std::getline(std::cin, line)) {
      lines.push_back(line);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (const auto& line : lines) {
      std::cout << line << "\n";
    }
  }

 private:
  std::vector<std::string> lines;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintAsItIs2 print_as_it_is_2;
  print_as_it_is_2.SetInputs();
  print_as_it_is_2.Calculate();
  print_as_it_is_2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11719_PRINT_AS_IT_IS_2_H_
