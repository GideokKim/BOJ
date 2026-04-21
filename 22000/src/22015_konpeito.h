#ifndef BOJ_21000_SRC_22015_KONPEITO_H_
#define BOJ_21000_SRC_22015_KONPEITO_H_

#include <iostream>

class Konpeito {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() {
    if (a > b) {
      size_t temp = a;
      a = b;
      b = temp;
    }
    if (b > c) {
      size_t temp = b;
      b = c;
      c = temp;
    }
    result = 2 * c - a - b;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t a, b, c;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Konpeito konpeito;
  konpeito.SetInputs();
  konpeito.Calculate();
  konpeito.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_22015_KONPEITO_H_
