#ifndef BOJ_30000_SRC_30979_CARING_FOR_KINDERGARTEN_H_
#define BOJ_30000_SRC_30979_CARING_FOR_KINDERGARTEN_H_

#include <iostream>
#include <string>

class CaringForKindergarten {
 public:
  void SetInputs() {}

  void Calculate() {
    t = -1;
    int n, input;
    std::cin >> t >> n;

    for (int i = 0; i < n; ++i) {
      std::cin >> input;
      t -= input;
    }

    if (t <= 0) {
      result = "Padaeng_i Happy";
    } else {
      result = "Padaeng_i Cry";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int t;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  CaringForKindergarten caring_for_kindergarten;
  caring_for_kindergarten.SetInputs();
  caring_for_kindergarten.Calculate();
  caring_for_kindergarten.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30033_RUST_STUDY_H_
