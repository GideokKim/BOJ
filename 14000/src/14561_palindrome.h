#ifndef BOJ_14000_SRC_14561_PALINDROME_H_
#define BOJ_14000_SRC_14561_PALINDROME_H_

#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

class Palindrome {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    numbers.resize(t, 0);
    decimals.resize(t, 0);
    results.resize(t, 1);

    for (size_t i = 0; i < t; ++i) {
      std::cin >> numbers[i] >> decimals[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < numbers.size(); ++i) {
      long long number = numbers[i];
      long long decimal = decimals[i];
      std::string num_str = "";
      while (number) {
        long long remainder = number % decimal;
        if (remainder > 9) {
          num_str += 'A' + remainder - 10;
        } else {
          num_str += std::to_string(remainder);
        }
        number /= decimal;
      }

      for (size_t idx = 0; idx < num_str.size() / 2; ++idx) {
        if (num_str[idx] != num_str[num_str.size() - 1 - idx]) {
          results[i] = 0;
          break;
        }
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<long long> numbers;
  std::vector<long long> decimals;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Palindrome palindrome;
  palindrome.SetInputs();
  palindrome.Calculate();
  palindrome.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14561_PALINDROME_H_
