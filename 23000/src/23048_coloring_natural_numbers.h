#ifndef BOJ_23000_SRC_23048_COLORING_NATURAL_NUMBERS_H_
#define BOJ_23000_SRC_23048_COLORING_NATURAL_NUMBERS_H_

#include <cmath>
#include <iostream>
#include <map>
#include <vector>
class ColoringNaturalNumbers {
 public:
  void SetInputs() { std::cin >> N; }

  void GeneratePrimeNumbers() {
    prime_numbers_.clear();
    int color = 2;
    for (int number = 2; number <= static_cast<int>(std::sqrt(N) + 1);
         number++) {
      bool is_prime = true;
      for (const auto& prime_number : prime_numbers_) {
        if (number % prime_number.first == 0) {
          is_prime = false;
          break;
        }
      }
      if (is_prime) {
        prime_numbers_[number] = color;
        color++;
      }
    }
  }

  int GetK() const { return K; }

  const std::vector<unsigned long>& GetColors() const { return colors_; }

  void SetColors() {
    colors_.clear();
    colors_.resize(N);

    unsigned long color = 1;
    unsigned long last_color = 1;
    colors_[0] = color;
    for (size_t i = 1; i < N; i++) {
      size_t target_number = i + 1;
      bool is_prime = true;
      bool is_new_prime = false;

      for (const auto& prime_number : prime_numbers_) {
        if (target_number % prime_number.first == 0) {
          if (last_color < prime_number.second) {
            last_color = prime_number.second;
          }
          color = prime_number.second;
          colors_[i] = color;
          is_prime = false;
          break;
        } else {
          is_new_prime = true;
        }
      }
      if (is_prime && is_new_prime) {
        last_color++;
        colors_[i] = last_color;
      }
    }
    K = last_color;
  }

 private:
  size_t N;
  int K;
  std::vector<unsigned long> colors_;
  std::map<int, int> prime_numbers_;
};

#ifdef BOJ_SUBMIT
int main() {
  ColoringNaturalNumbers coloring_natural_numbers;
  coloring_natural_numbers.SetInputs();
  coloring_natural_numbers.GeneratePrimeNumbers();
  coloring_natural_numbers.SetColors();
  std::cout << coloring_natural_numbers.GetK() << '\n';
  for (const auto& color : coloring_natural_numbers.GetColors()) {
    std::cout << color << ' ';
  }

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23048_COLORING_NATURAL_NUMBERS_H_
