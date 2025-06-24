#ifndef BOJ_10000_SRC_10867_SORT_EXCEPT_REPEATED_NUMBERS_H_
#define BOJ_10000_SRC_10867_SORT_EXCEPT_REPEATED_NUMBERS_H_

#include <iostream>
#include <set>

class SortExceptRepeatedNumbers {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    size_t num;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> num;
      input.insert(num);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (auto target : input) {
      std::cout << target << ' ';
    }
  }

 private:
  std::set<int> input;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SortExceptRepeatedNumbers sort_except_repeated_numbers;
  sort_except_repeated_numbers.SetInputs();
  sort_except_repeated_numbers.Calculate();
  sort_except_repeated_numbers.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10867_SORT_EXCEPT_REPEATED_NUMBERS_H_
