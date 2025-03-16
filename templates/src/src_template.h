#ifndef BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_
#define BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_

#include <iostream>

class SrcTemplate {
 public:
  void SetInputs() {
    std::cin >> n >> r >> c;
    std::cin.ignore();
  }

  void Calculate() {
    if (n == 3) {
      if (r == 2 && c == 2) {
        result = 1;
      } else {
        result = 4;
      }
    } else {
      if (n % 2 == 0) {
        result = n * n / 2;
      } else {
        if ((r + c) % 2) {
          result = n * n / 2;
        } else {
          result = n * n / 2 + 1;
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, r, c;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SrcTemplate src_template;
  src_template.SetInputs();
  src_template.Calculate();
  src_template.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_
