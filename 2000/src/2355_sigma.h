#ifndef BOJ_2000_SRC_2355_SIGMA_H_
#define BOJ_2000_SRC_2355_SIGMA_H_

#include <iostream>

class Sigma {
 public:
  void SetInput() { std::cin >> a >> b; }

  void PrintSigma() { std::cout << b * (b + 1) / 2 - a * (a - 1) / 2; }

 private:
  int a;
  int b;
};

#ifdef BOJ_SUBMIT
int main() {
  Sigma sigma;
  sigma.SetInput();
  sigma.PrintSigma();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2355_SIGMA_H_
