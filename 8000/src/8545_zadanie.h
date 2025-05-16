#ifndef BOJ_8000_SRC_8545_ZADANIE_H_
#define BOJ_8000_SRC_8545_ZADANIE_H_

#include <iostream>
#include <string>

class Zadanie {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {}

  void PrintResult() {
    for (int index = static_cast<int>(input.size()) - 1; index >= 0; --index) {
      std::cout << input[index];
    }
  }

 private:
  std::string input;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Zadanie zadanie;
  zadanie.SetInputs();
  zadanie.Calculate();
  zadanie.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_8000_SRC_8545_ZADANIE_H_
