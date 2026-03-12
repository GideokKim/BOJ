#ifndef BOJ_1000_SRC_1871_NICE_CAR_NUMBER_H_
#define BOJ_1000_SRC_1871_NICE_CAR_NUMBER_H_

#include <cmath>
#include <iostream>
#include <string>
#include <vector>

class NiceCarNumber {
 public:
  void SetInputs() {
    std::cin >> n;
    car_numbers.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> car_numbers[i];
    }
  }

  void Calculate() {
    for (auto car_number : car_numbers) {
      long long left_score = (car_number[0] - 'A') * 26 * 26 +
                             (car_number[1] - 'A') * 26 + (car_number[2] - 'A');
      long long right_score = std::stoi(car_number.substr(4, 4));
      if (std::abs(left_score - right_score) <= 100) {
        results.push_back("nice");
      } else {
        results.push_back("not nice");
      }
    }
  }

  void PrintResult() {
    for (const auto& number : results) {
      std::cout << number << "\n";
    }
  }

 private:
  size_t n;
  std::vector<std::string> car_numbers;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  NiceCarNumber nice_car_number;
  nice_car_number.SetInputs();
  nice_car_number.Calculate();
  nice_car_number.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1871_NICE_CAR_NUMBER_H_
