#ifndef BOJ_11000_SRC_11176_IN_THE_SHOWER_H_
#define BOJ_11000_SRC_11176_IN_THE_SHOWER_H_

#include <iostream>
#include <vector>

class InTheShower {
 public:
  void SetInputs() {
    size_t t, e, n;
    std::cin >> t;
    results.resize(t, 0);

    for (size_t i = 0; i < t; ++i) {
      std::cin >> e >> n;
      for (size_t j = 0; j < n; ++j) {
        size_t try_count;
        std::cin >> try_count;
        if (try_count > e) {
          results[i]++;
        }
      }
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << std::endl;
    }
  };

 private:
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  InTheShower in_the_shower;
  in_the_shower.SetInputs();
  in_the_shower.Calculate();
  in_the_shower.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11176_IN_THE_SHOWER_H_
