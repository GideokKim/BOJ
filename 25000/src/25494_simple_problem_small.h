#ifndef BOJ_25000_SRC_25494_SIMPLE_PROBLEM_SMALL_H_
#define BOJ_25000_SRC_25494_SIMPLE_PROBLEM_SMALL_H_

#include <iostream>
#include <vector>

class SimpleProblemSmall {
 public:
  void SetInputs() { std::cin >> t; }

  void Calculate() {
    for (int i = 0; i < t; i++) {
      std::cin >> a >> b >> c;
      int result = 0;
      for (int x = 1; x <= a; x++) {
        for (int y = 1; y <= b; y++) {
          for (int z = 1; z <= c; z++) {
            if (x % y == y % z && y % z == z % x) {
              result++;
            }
          }
        }
      }
      results.push_back(result);
    }
  }

  void PrintResult() {
    for (int i = 0; i < results.size(); i++) {
      std::cout << results[i] << '\n';
    }
  }

 private:
  int t, a, b, c;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  SimpleProblemSmall simple_problem_small;
  simple_problem_small.SetInputs();
  simple_problem_small.Calculate();
  simple_problem_small.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25494_SIMPLE_PROBLEM_SMALL_H_
