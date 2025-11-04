#ifndef BOJ_26000_SRC_26574_COPIER_H_
#define BOJ_26000_SRC_26574_COPIER_H_

#include <iostream>
#include <string>
#include <vector>

class Copier {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    inputs.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < inputs.size(); ++i) {
      std::cout << inputs[i] << " " << inputs[i] << "\n";
    }
  }

 private:
  std::vector<std::string> inputs;
};

#ifdef BOJ_SUBMIT
int main() {
  Copier copier;
  copier.SetInputs();
  copier.Calculate();
  copier.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26574_COPIER_H_
