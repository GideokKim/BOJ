#ifndef BOJ_13000_SRC_13699_RECURRENCE_RELATION_H_
#define BOJ_13000_SRC_13699_RECURRENCE_RELATION_H_

#include <iostream>
#include <vector>

class RecurrenceRelation {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    dp.resize(n + 1, 0);
    dp[0] = 1;
    for (size_t index = 1; index <= n; ++index) {
      auto reverse_num = index - 1;
      for (size_t num = 0; num < index; ++num) {
        dp[index] += dp[num] * dp[reverse_num];
        reverse_num--;
      }
    }
  }

  void PrintResult() { std::cout << dp[n]; }

 private:
  size_t n;
  std::vector<size_t> dp;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  RecurrenceRelation recurrence_relation;
  recurrence_relation.SetInputs();
  recurrence_relation.Calculate();
  recurrence_relation.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13699_RECURRENCE_RELATION_H_
