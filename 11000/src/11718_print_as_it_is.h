#ifndef BOJ_11000_SRC_11718_PRINT_AS_IT_IS_H_
#define BOJ_11000_SRC_11718_PRINT_AS_IT_IS_H_

#include <iostream>
#include <string>
#include <vector>

class PrintAsItIs {
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
  PrintAsItIs print_as_it_is;
  print_as_it_is.SetInputs();
  print_as_it_is.Calculate();
  print_as_it_is.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11718_PRINT_AS_IT_IS_H_
