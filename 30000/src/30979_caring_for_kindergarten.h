#ifndef BOJ_30000_SRC_30979_CARING_FOR_KINDERGARTEN_H_
#define BOJ_30000_SRC_30979_CARING_FOR_KINDERGARTEN_H_

#include <iostream>
#include <string>

class CaringForKindergarten {
 public:
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

  std::string GetResult() { return result; }

 private:
  int t;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  CaringForKindergarten caring_for_kindergarten;
  caring_for_kindergarten.Calculate();
  std::cout << caring_for_kindergarten.GetResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30033_RUST_STUDY_H_
