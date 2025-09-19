#ifndef BOJ_7000_SRC_7789_TELE_PRIME_H_
#define BOJ_7000_SRC_7789_TELE_PRIME_H_

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

class TelePrime {
 public:
  void SetInputs() {
    std::string previous_number, current_number;
    std::cin >> previous_number >> current_number;
    current_number += previous_number;
    target_numbers.emplace_back(std::stoll(current_number));
    target_numbers.emplace_back(std::stoll(previous_number));
    primes.emplace_back(2);
  }

  void Calculate() {
    result = "Yes";
    for (long long num = 3;
         num <= static_cast<long long>(std::sqrt(target_numbers[1]));
         num += 2) {
      bool is_prime = true;
      for (auto prime : primes) {
        if (num % prime == 0) {
          is_prime = false;
          break;
        }
      }
      if (is_prime) {
        primes.emplace_back(num);
      }
    }
    for (auto prime : primes) {
      if (target_numbers[0] % prime == 0 || target_numbers[1] % prime == 0) {
        result = "No";
        return;
      }
    }

    for (long long num = primes.back() + 2;
         num <= static_cast<long long>(std::sqrt(target_numbers[0]));
         num += 2) {
      bool is_prime = true;
      for (auto prime : primes) {
        if (num % prime == 0) {
          is_prime = false;
          break;
        }
      }
      if (is_prime) {
        primes.emplace_back(num);
      }
    }
    for (auto prime : primes) {
      if (target_numbers[0] % prime == 0) {
        result = "No";
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> primes;
  std::vector<long long> target_numbers;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  TelePrime tele_prime;
  tele_prime.SetInputs();
  tele_prime.Calculate();
  tele_prime.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_7000_SRC_7789_TELE_PRIME_H_
