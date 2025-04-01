#ifndef BOJ_10000_SRC_10181_FEDERATION_FAVORITES_H_
#define BOJ_10000_SRC_10181_FEDERATION_FAVORITES_H_

#include <iostream>
#include <vector>

class FederationFavorites {
 public:
  void SetInputs() {}

  void Calculate() {
    int target_number;
    std::cin >> target_number;
    while (target_number != -1) {
      std::vector<int> divisors;
      divisors.clear();

      for (int divisor = 1; divisor < target_number; divisor++) {
        if (target_number % divisor == 0) {
          divisors.push_back(divisor);
        }
      }

      int sum = 0;
      for (const auto& divisor : divisors) {
        sum += divisor;
      }

      if (sum == target_number) {
        std::cout << target_number << " = ";
        for (size_t index = 0; index < divisors.size(); index++) {
          std::cout << divisors[index];
          if (index != divisors.size() - 1) {
            std::cout << " + ";
          }
        }
        std::cout << std::endl;
      } else {
        std::cout << target_number << " is NOT perfect." << std::endl;
      }
      std::cin >> target_number;
    }
  }

  void PrintResult() {}
};

#ifdef BOJ_SUBMIT
int main() {
  FederationFavorites federation_favorites;
  federation_favorites.SetInputs();
  federation_favorites.Calculate();
  federation_favorites.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10181_FEDERATION_FAVORITES_H_
