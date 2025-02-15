#ifndef BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_
#define BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_

#include <iostream>

class SrcTemplate {
 public:
  void SetInputs() {
    std::cin >> n;
    std::cin.ignore();
  }

  void Calculate() { result = n; }

  void PrintResult() { std::cout << result; }

 private:
  int n;
  int result;
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
