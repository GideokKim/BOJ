#ifndef BOJ_34000_SRC_34073_DORO_H_
#define BOJ_34000_SRC_34073_DORO_H_

#include <iostream>
#include <vector>

class Doro {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    inputs.resize(n);

    for (auto& input : inputs) {
      std::cin >> input;
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (auto& input : inputs) {
      std::cout << input << "DORO ";
    }
  }

 private:
  std::vector<std::string> inputs;
};

#ifdef BOJ_SUBMIT
int main() {
  Doro doro;
  doro.SetInputs();
  doro.Calculate();
  doro.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34073_DORO_H_
