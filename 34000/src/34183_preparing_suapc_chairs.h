#ifndef BOJ_34000_SRC_34183_PREPARING_SUAPC_CHAIRS_H_
#define BOJ_34000_SRC_34183_PREPARING_SUAPC_CHAIRS_H_

#include <iostream>

class PreparingSuapcChairs {
 public:
  void SetInputs() { std::cin >> n >> m >> a >> b; }

  void Calculate() {
    result = 3 * n > m ? 3 * n - m : 0;
    if (result) {
      result *= a;
      result += b;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, m, a, b;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  PreparingSuapcChairs preparingSuapcChairs;
  preparingSuapcChairs.SetInputs();
  preparingSuapcChairs.Calculate();
  preparingSuapcChairs.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34183_PREPARING_SUAPC_CHAIRS_H_
