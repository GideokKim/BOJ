#ifndef BOJ_2000_SRC_2355_SIGMA_H_
#define BOJ_2000_SRC_2355_SIGMA_H_

#include <iostream>

class Sigma {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = b * (b + 1) / 2 - a * (a - 1) / 2; }

  void PrintResult() { std::cout << result; }

 private:
  long long a, b;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Sigma sigma;
  sigma.SetInputs();
  sigma.Calculate();
  sigma.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2355_SIGMA_H_
