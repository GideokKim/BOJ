#ifndef BOJ_1000_SRC_1427_SORT_INSIDE_H_
#define BOJ_1000_SRC_1427_SORT_INSIDE_H_

#include <algorithm>
#include <iostream>
#include <string>

class SortInside {
 public:
  void SetInputs() { std::cin >> result; }

  void Calculate() { std::sort(result.rbegin(), result.rend()); }

  void PrintResult() { std::cout << result; }

 private:
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SortInside sort_inside;
  sort_inside.SetInputs();
  sort_inside.Calculate();
  sort_inside.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1427_SORT_INSIDE_H_
