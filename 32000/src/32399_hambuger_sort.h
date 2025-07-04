#ifndef BOJ_32000_SRC_32399_HAMBUGER_SORT_H_
#define BOJ_32000_SRC_32399_HAMBUGER_SORT_H_

#include <iostream>
#include <string>

class HambugerSort {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = 1;

    if (input == "(1)") {
      result = 0;
    }

    if (input == ")1(") {
      result = 2;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  HambugerSort hambuger_sort;
  hambuger_sort.SetInputs();
  hambuger_sort.Calculate();
  hambuger_sort.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32399_HAMBUGER_SORT_H_
