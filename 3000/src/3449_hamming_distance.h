#ifndef BOJ_3000_SRC_3449_HAMMING_DISTANCE_H_
#define BOJ_3000_SRC_3449_HAMMING_DISTANCE_H_

#include <iostream>
#include <string>
#include <vector>

class HammingDistance {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    inputs.resize(2 * t);
    for (size_t i = 0; i < inputs.size(); ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < inputs.size(); i += 2) {
      size_t count = 0;
      for (size_t index = 0; index < inputs[i].size(); ++index) {
        if (inputs[i][index] != inputs[i + 1][index]) {
          ++count;
        }
      }
      results.push_back(count);
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); i++) {
      std::cout << "Hamming distance is " << results[i] << ".\n";
    }
  }

 private:
  std::vector<std::string> inputs;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  HammingDistance hamming_distance;
  hamming_distance.SetInputs();
  hamming_distance.Calculate();
  hamming_distance.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3449_HAMMING_DISTANCE_H_
