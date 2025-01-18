#ifndef BOJ_2000_SRC_2960_SIEVE_OF_ERATOSTHENES_H_
#define BOJ_2000_SRC_2960_SIEVE_OF_ERATOSTHENES_H_

#include <iostream>
#include <vector>

class SieveOfEratosthenes {
 public:
  void SetInputs() { std::cin >> n >> k; }

  void Calculate() {
    GeneratePrimeNumbers();
    is_deleted.resize(n + 1, false);
    for (const auto& prime_number : prime_numbers) {
      int deleted_number = prime_number;
      while (deleted_number <= n) {
        if (!is_deleted[deleted_number]) {
          --k;
          if (k == 0) {
            result = deleted_number;
            return;
          }
          is_deleted[deleted_number] = true;
        }
        deleted_number += prime_number;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  void GeneratePrimeNumbers() {
    prime_numbers.clear();
    for (int number = 2; number <= n; number++) {
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

  int n;
  int k;
  int result;
  std::vector<int> prime_numbers;
  std::vector<bool> is_deleted;
};

#ifdef BOJ_SUBMIT
int main() {
  SieveOfEratosthenes sieve_of_eratosthenes;
  sieve_of_eratosthenes.SetInputs();
  sieve_of_eratosthenes.Calculate();
  sieve_of_eratosthenes.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2960_SIEVE_OF_ERATOSTHENES_H_
