#ifndef BOJ_27000_SRC_27959_CHOCO_BAR_H_
#define BOJ_27000_SRC_27959_CHOCO_BAR_H_

#include <iostream>

class ChocoBar {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() {
    if (n * 100 < m) {
      result = false;
    } else {
      result = true;
    }
  }

  void PrintResult() const { std::cout << (result ? "Yes" : "No"); }

 private:
  int n, m;
  bool result;
};

#ifdef BOJ_SUBMIT
int main() {
  ChocoBar choco_bar;
  choco_bar.SetInputs();
  choco_bar.Calculate();
  choco_bar.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27959_CHOCO_BAR_H_
