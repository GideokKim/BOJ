#ifndef BOJ_30000_SRC_30033_RUST_STUDY_H_
#define BOJ_30000_SRC_30033_RUST_STUDY_H_

#include <iostream>
#include <vector>

class RustStudy {
 public:
  void Calculate() {
    size_t days;
    int input;
    result = 0;
    std::cin >> days;
    plans.resize(days);

    for (size_t i = 0; i < days; ++i) {
      std::cin >> plans[i];
    }
    for (size_t i = 0; i < days; ++i) {
      std::cin >> input;
      if (plans[i] <= input) {
        ++result;
      }
    }
  }

  size_t GetResult() { return result; }

 private:
  std::vector<int> plans;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  RustStudy rust_study;
  rust_study.Calculate();
  std::cout << rust_study.GetResult() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30033_RUST_STUDY_H_
