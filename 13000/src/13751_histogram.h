#ifndef BOJ_13000_SRC_13751_HISTOGRAM_H_
#define BOJ_13000_SRC_13751_HISTOGRAM_H_

#include <iostream>
#include <string>
#include <vector>

class Histogram {
 public:
  void SetInputs() {
    size_t histogram_size;
    std::cin >> histogram_size;
    histogram.resize(histogram_size, 0);
    for (size_t i = 0; i < histogram_size; ++i) {
      std::cin >> histogram[i];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (const auto& height : histogram) {
      std::cout << std::string(height, '=') << '\n';
    }
  }

 private:
  std::vector<int> histogram;
};

#ifdef BOJ_SUBMIT
int main() {
  Histogram histogram;
  histogram.SetInputs();
  histogram.Calculate();
  histogram.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13751_HISTOGRAM_H_
