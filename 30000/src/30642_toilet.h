#ifndef BOJ_30000_SRC_30642_TOILET_H_
#define BOJ_30000_SRC_30642_TOILET_H_

#include <iostream>
#include <string>

class Toilet {
 public:
  void SetInputs() { std::cin >> n >> name >> k; }

  void Calculate() {
    size_t target = name == "annyong" ? 1 : 0;
    if (k % 2 == target) {
      result = k;
      return;
    } else {
      result = k - 1;
      if (result == 0) {
        result += 2;
      }
      return;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, k;
  std::string name;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Toilet toilet;
  toilet.SetInputs();
  toilet.Calculate();
  toilet.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30642_TOILET_H_
