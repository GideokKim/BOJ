#ifndef BOJ_4000_SRC_4562_NO_BRAINER_H_
#define BOJ_4000_SRC_4562_NO_BRAINER_H_

#include <iostream>
#include <vector>

class NoBrainer {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;

    data_list.resize(n);
    results.resize(n, false);

    for (auto& target : data_list) {
      std::cin >> target.first >> target.second;
    }
  }

  void Calculate() {
    for (size_t i = 0; i < data_list.size(); ++i) {
      auto& target = data_list[i];
      if (target.first >= target.second) {
        results[i] = true;
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      if (result) {
        std::cout << "MMM BRAINS\n";
      } else {
        std::cout << "NO BRAINS\n";
      }
    }
  }

 private:
  std::vector<std::pair<long long, long long>> data_list;
  std::vector<bool> results;
};

#ifdef BOJ_SUBMIT
int main() {
  NoBrainer no_brainer;
  no_brainer.SetInputs();
  no_brainer.Calculate();
  no_brainer.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4562_NO_BRAINER_H_
