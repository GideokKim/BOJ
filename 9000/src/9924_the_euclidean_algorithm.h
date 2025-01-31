#ifndef BOJ_9000_SRC_9924_THE_EUCLIDEAN_ALGORITHM_H_
#define BOJ_9000_SRC_9924_THE_EUCLIDEAN_ALGORITHM_H_

#include <algorithm>
#include <iostream>

class EuclideanAlgorithm {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    result = 0;
    while (a != b) {
      if (a > b) {
        a -= b;
      } else {
        b -= a;
      }
      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  EuclideanAlgorithm euclidean_algorithm;
  euclidean_algorithm.SetInputs();
  euclidean_algorithm.Calculate();
  euclidean_algorithm.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9924_THE_EUCLIDEAN_ALGORITHM_H_
