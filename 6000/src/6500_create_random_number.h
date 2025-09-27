#ifndef BOJ_6000_SRC_6500_CREATE_RANDOM_NUMBER_H_
#define BOJ_6000_SRC_6500_CREATE_RANDOM_NUMBER_H_

#include <iostream>
#include <set>
#include <string>
#include <vector>

class CreateRandomNumber {
 public:
  void SetInputs() {
    long long num;
    std::cin >> num;
    while (num) {
      numbers.emplace_back(num);
      std::cin >> num;
    }
  }

  void Calculate() {
    for (auto num : numbers) {
      std::set<long long> candidate;
      size_t size = -1;
      long long target = num;
      candidate.insert(target);
      while (size != candidate.size()) {
        size = candidate.size();
        target *= target;
        target %= 1000000;
        target /= 100;
        candidate.insert(target);
      }
      results.emplace_back(size);
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<long long> numbers;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  CreateRandomNumber create_random_number;
  create_random_number.SetInputs();
  create_random_number.Calculate();
  create_random_number.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_6000_SRC_6500_CREATE_RANDOM_NUMBER_H_
