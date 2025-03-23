#ifndef BOJ_23000_SRC_23738_PECTOPAH_H_
#define BOJ_23000_SRC_23738_PECTOPAH_H_

#include <cctype>
#include <iostream>
#include <string>

class Pectopah {
 public:
  void SetInputs() { std::cin >> input_string; }

  void Calculate() {
    result = "";
    for (auto target : input_string) {
      if (target == 'B') {
        result += "v";
      } else if (target == 'E') {
        result += "ye";
      } else if (target == 'H') {
        result += "n";
      } else if (target == 'P') {
        result += "r";
      } else if (target == 'C') {
        result += "s";
      } else if (target == 'Y') {
        result += "u";
      } else if (target == 'X') {
        result += "h";
      } else {
        result += std::tolower(target);
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input_string;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Pectopah pectopah;
  pectopah.SetInputs();
  pectopah.Calculate();
  pectopah.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23738_PECTOPAH_H_
