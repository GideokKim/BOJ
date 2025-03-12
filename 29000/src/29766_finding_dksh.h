#ifndef BOJ_29000_SRC_29766_FINDING_DKSH_H_
#define BOJ_29000_SRC_29766_FINDING_DKSH_H_

#include <iostream>
#include <vector>

class FindingDksh {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = 0;
    while (input.find("DKSH") != std::string::npos) {
      input.replace(input.find("DKSH"), 4, "");
      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  FindingDksh finding_dksh;
  finding_dksh.SetInputs();
  finding_dksh.Calculate();
  finding_dksh.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_29000_SRC_29766_FINDING_DKSH_H_
