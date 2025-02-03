#ifndef BOJ_11000_SRC_11866_JOSEPHUS_PROBLEM_0_H_
#define BOJ_11000_SRC_11866_JOSEPHUS_PROBLEM_0_H_

#include <iostream>
#include <queue>

class JosephusProblem0 {
 public:
  void SetInputs() {
    int n;
    std::cin >> n >> k;

    for (int i = 0; i < n; ++i) {
      numbers.push(i + 1);
    }
  }

  void Calculate() {
    while (!numbers.empty()) {
      for (int i = 0; i < k - 1; ++i) {
        numbers.push(numbers.front());
        numbers.pop();
      }
      result.push_back(numbers.front());
      numbers.pop();
    }
  }

  void PrintResult() {
    std::cout << '<';
    for (size_t index = 0; index < result.size() - 1; ++index) {
      std::cout << result[index];
      std::cout << ", ";
    }
    std::cout << result.back() << '>';
  }

 private:
  int k;
  std::queue<int> numbers;
  std::vector<int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  JosephusProblem0 josephus_problem;
  josephus_problem.SetInputs();
  josephus_problem.Calculate();
  josephus_problem.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11866_JOSEPHUS_PROBLEM_0_H_
