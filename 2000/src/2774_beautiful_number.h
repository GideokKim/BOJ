#ifndef BOJ_2000_SRC_2774_BEAUTIFUL_NUMBER_H_
#define BOJ_2000_SRC_2774_BEAUTIFUL_NUMBER_H_

#include <iostream>
#include <set>
#include <string>
#include <vector>

class BeautifulNumber {
 public:
  void SetInputs() {
    std::cin >> t;
    numbers.resize(t);
    results.resize(t, 0);
    for (auto& number : numbers) {
      std::cin >> number;
    }
  }

  void Calculate() {
    for (size_t i = 0; i < t; ++i) {
      std::set<char> unique_numbers;
      auto number = numbers[i];
      for (auto target : number) {
        unique_numbers.insert(target);
      }
      results[i] = unique_numbers.size();
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  size_t t;
  std::vector<std::string> numbers;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  BeautifulNumber beautiful_number;
  beautiful_number.SetInputs();
  beautiful_number.Calculate();
  beautiful_number.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2774_BEAUTIFUL_NUMBER_H_
