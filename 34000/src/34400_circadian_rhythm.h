#ifndef BOJ_34000_SRC_34400_CIRCADIAN_RHYTHM_H_
#define BOJ_34000_SRC_34400_CIRCADIAN_RHYTHM_H_

#include <iostream>
#include <string>
#include <vector>

class CircadianRhythm {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    inputs.resize(t);
    results.resize(t, "ONLINE");

    for (size_t i = 0; i < t; ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    for (int index = 0; index < inputs.size(); ++index) {
      int time = inputs[index] % 25;
      if (time > 16) {
        results[index] = "OFFLINE";
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<int> inputs;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  CircadianRhythm circadian_rhythm;
  circadian_rhythm.SetInputs();
  circadian_rhythm.Calculate();
  circadian_rhythm.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34400_CIRCADIAN_RHYTHM_H_
