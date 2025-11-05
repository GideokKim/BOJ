#ifndef BOJ_14000_SRC_14656_TA_IS_SADIST_H_
#define BOJ_14000_SRC_14656_TA_IS_SADIST_H_

#include <iostream>
#include <vector>

class TaIsSadist {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    students.resize(n, 0);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> students[i];
    }
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < students.size(); ++i) {
      if (students[i] != i + 1) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> students;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  TaIsSadist ta_is_sadist;
  ta_is_sadist.SetInputs();
  ta_is_sadist.Calculate();
  ta_is_sadist.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14656_TA_IS_SADIST_H_
