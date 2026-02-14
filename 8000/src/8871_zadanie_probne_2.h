#ifndef BOJ_8000_SRC_8871_ZADANIE_PROBNE_2_H_
#define BOJ_8000_SRC_8871_ZADANIE_PROBNE_2_H_

#include <iostream>
#include <string>
#include <vector>

class ZadanieProbne2 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result1 = (n + 1) * 2;
    result2 = (n + 1) * 3;
  }

  void PrintResult() { std::cout << result1 << ' ' << result2; }

 private:
  size_t n;
  size_t result1, result2;
};

#ifdef BOJ_SUBMIT
int main() {
  ZadanieProbne2 zadanie_probne_2;
  zadanie_probne_2.SetInputs();
  zadanie_probne_2.Calculate();
  zadanie_probne_2.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_8000_SRC_8871_ZADANIE_PROBNE_2_H_
