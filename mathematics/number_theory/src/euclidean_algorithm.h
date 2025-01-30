#ifndef BOJ_MATHEMATICS_NUMBER_THEORY_SRC_EUCLIDEAN_ALGORITHM_H_
#define BOJ_MATHEMATICS_NUMBER_THEORY_SRC_EUCLIDEAN_ALGORITHM_H_

#include <iostream>
#include <vector>

namespace boj {
namespace mathematics {
namespace number_theory {

class EuclideanAlgorithm {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    while (b != 0) {
      int temp = a % b;
      a = b;
      b = temp;
    }
    gcd = a;
  }

  void PrintResult() { std::cout << gcd; }

 private:
  int a, b;
  int gcd;
};

}  // namespace number_theory
}  // namespace mathematics
}  // namespace boj

#endif  // BOJ_MATHEMATICS_NUMBER_THEORY_SRC_EUCLIDEAN_ALGORITHM_H_
