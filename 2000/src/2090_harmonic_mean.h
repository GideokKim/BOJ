#ifndef BOJ_2000_SRC_2090_HARMONIC_MEAN_H_
#define BOJ_2000_SRC_2090_HARMONIC_MEAN_H_

#include <iostream>
#include <string>
#include <vector>

class HarmonicMean {
 public:
  void SetInputs() {
    int n;
    mul = 1;
    std::cin >> n;
    numbers.resize(n);
    for (int i = 0; i < n; ++i) {
      std::cin >> numbers[i];
      mul *= numbers[i];
    }
  }

  void Calculate() {
    GeneratePrimeNumbers();
    long long denominator = 0;
    for (auto number : numbers) {
      denominator += mul / number;
    }
    for (const auto& prime_number : prime_numbers) {
      while (denominator % prime_number == 0 && mul % prime_number == 0) {
        denominator /= prime_number;
        mul /= prime_number;
      }
    }

    result = std::to_string(mul) + "/" + std::to_string(denominator);
  }

  void PrintResult() { std::cout << result; }

 private:
  void GeneratePrimeNumbers() {
    prime_numbers.clear();
    for (int number = 2; number <= 100; number++) {
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

  std::vector<int> numbers;
  std::vector<int> prime_numbers;
  long long mul;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  HarmonicMean harmonic_mean;
  harmonic_mean.SetInputs();
  harmonic_mean.Calculate();
  harmonic_mean.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2090_HARMONIC_MEAN_H_
