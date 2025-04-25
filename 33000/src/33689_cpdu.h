#ifndef BOJ_33000_SRC_33689_CPDU_H_
#define BOJ_33000_SRC_33689_CPDU_H_

#include <iostream>
#include <string>
#include <vector>

class Cpdu {
 public:
  void SetInputs() {
    size_t size;
    std::cin >> size;
    std::string input;
    while (std::getline(std::cin, input)) {
      inputs.push_back(input);
    }
  }

  void Calculate() {
    result = 0;
    for (auto input : inputs) {
      if (input[0] == 'C') {
        result++;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Cpdu cpdu;
  cpdu.SetInputs();
  cpdu.Calculate();
  cpdu.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33689_CPDU_H_
