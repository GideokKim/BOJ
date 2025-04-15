#ifndef BOJ_20000_SRC_20977_JOI_SORT_H_
#define BOJ_20000_SRC_20977_JOI_SORT_H_

#include <iostream>
#include <string>

class JoiSort {
 public:
  void SetInputs() { std::cin >> n >> s; }

  void Calculate() {
    j_count = 0;
    o_count = 0;
    i_count = 0;
    for (auto target : s) {
      if (target == 'J') {
        j_count++;
      } else if (target == 'O') {
        o_count++;
      } else if (target == 'I') {
        i_count++;
      }
    }
  }

  void PrintResult() {
    std::cout << std::string(j_count, 'J') << std::string(o_count, 'O')
              << std::string(i_count, 'I');
  }

 private:
  size_t n;
  std::string s;
  size_t j_count;
  size_t o_count;
  size_t i_count;
};

#ifdef BOJ_SUBMIT
int main() {
  JoiSort joi_sort;
  joi_sort.SetInputs();
  joi_sort.Calculate();
  joi_sort.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_20000_SRC_20977_JOI_SORT_H_
