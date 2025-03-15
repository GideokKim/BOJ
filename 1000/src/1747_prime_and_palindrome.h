#ifndef BOJ_1000_SRC_1747_PRIME_AND_PALINDROME_H_
#define BOJ_1000_SRC_1747_PRIME_AND_PALINDROME_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class PrimeAndPalindrome {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { GeneratePrimeNumbers(); }

  void PrintResult() {
    for (int number = n; number <= 1004000; ++number) {
      if (!IsPalindrome(number) || number == 1) {
        continue;
      }
      if (std::find(prime_numbers.begin(), prime_numbers.end(), number) !=
          prime_numbers.end()) {
        std::cout << number;
        break;
      }

      bool is_prime = true;
      for (const auto& prime_number : prime_numbers) {
        if (number < prime_number) {
          break;
        }
        if (number % prime_number == 0) {
          is_prime = false;
          break;
        }
      }
      if (is_prime) {
        std::cout << number;
        break;
      }
    }
  }

 private:
  bool IsPalindrome(int number) {
    std::string str = std::to_string(number);
    std::string reversed_str = std::to_string(number);
    std::reverse(reversed_str.begin(), reversed_str.end());
    return str.compare(reversed_str) == 0;
  }

  void GeneratePrimeNumbers() {
    prime_numbers.clear();
    for (int number = 2; number <= 1004; number++) {
      bool is_prime = true;
      for (const auto& prime_number : prime_numbers) {
        if (number % prime_number == 0) {
          is_prime = false;
          break;
        }
      }
      if (is_prime) {
        prime_numbers.push_back(number);
      }
    }
  }

  std::vector<int> prime_numbers;
  int n;
};

#ifdef BOJ_SUBMIT
int main() {
  PrimeAndPalindrome prime_and_palindrome;
  prime_and_palindrome.SetInputs();
  prime_and_palindrome.Calculate();
  prime_and_palindrome.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1747_PRIME_AND_PALINDROME_H_
