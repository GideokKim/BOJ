#ifndef BOJ_34000_SRC_34509_MAKE_N_H_
#define BOJ_34000_SRC_34509_MAKE_N_H_

#include <iostream>
#include <vector>

class MakeN {
 public:
  void SetInputs() {}

  void Calculate() {
    for (int num = 10; num < 100; ++num) {
      int valid_num = num / 10;
      valid_num += (num % 10) * 10;
      if (valid_num % 4 != 0) {
        continue;
      }
      valid_num = num / 10 + num % 10;
      if (valid_num % 6 != 0) {
        continue;
      }
      if (num / 10 == 8 || num % 10 == 8) {
        continue;
      }
      results.emplace_back(num);
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result;
    }
  }

 private:
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  MakeN make_n;
  make_n.SetInputs();
  make_n.Calculate();
  make_n.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34509_MAKE_N_H_
