#ifndef BOJ_15000_SRC_15963_CASIO_H_
#define BOJ_15000_SRC_15963_CASIO_H_

#include <iostream>

class Casio {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() { result = n == m ? 1 : 0; }

  void PrintResult() { std::cout << result; }

 private:
  long long n, m;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Casio casio;
  casio.SetInputs();
  casio.Calculate();
  casio.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15963_CASIO_H_
