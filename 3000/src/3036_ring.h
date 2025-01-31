#ifndef BOJ_3000_SRC_3036_RING_H_
#define BOJ_3000_SRC_3036_RING_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Ring {
 public:
  void SetInputs() {
    std::cin >> number_of_targets;
    number_of_targets -= 1;
  }

  void Calculate() {
    results.resize(number_of_targets);

    int first_ring = 0;
    std::cin >> first_ring;

    for (size_t i = 0; i < number_of_targets; i++) {
      int target_ring;
      std::cin >> target_ring;
      int gcd = first_ring;
      int b = target_ring;

      if (gcd < b) {
        std::swap(gcd, b);
      }
      while (b != 0) {
        int temp = gcd % b;
        gcd = b;
        b = temp;
      }
      results[i] = std::to_string(first_ring / gcd) + "/" +
                   std::to_string(target_ring / gcd);
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < number_of_targets; i++) {
      std::cout << results[i] << std::endl;
    }
  }

 private:
  size_t number_of_targets;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Ring ring;
  ring.SetInputs();
  ring.Calculate();
  ring.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3036_RING_H_
