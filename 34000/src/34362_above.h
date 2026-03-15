#ifndef BOJ_34000_SRC_34362_ABOVE_H_
#define BOJ_34000_SRC_34362_ABOVE_H_

#include <iomanip>
#include <iostream>

class Above {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = n - 0.3; }

  void PrintResult() {
    std::cout << std::fixed << std::setprecision(4) << result;
  }

 private:
  double n;
  double result;
};

#ifdef BOJ_SUBMIT
int main() {
  Above above;
  above.SetInputs();
  above.Calculate();
  above.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34362_ABOVE_H_
