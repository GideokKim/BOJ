#ifndef BOJ_2000_SRC_2501_DIVISORS_H_
#define BOJ_2000_SRC_2501_DIVISORS_H_

#include <algorithm>
#include <cmath>
#include <vector>

class Divisors {
 public:
  Divisors(int input_N, int input_K) : N(input_N), K(input_K) {}

  int Calculate() {
    std::vector<int> divisors;
    int sqrt_N = static_cast<int>(std::sqrt(N));

    for (int i = 1; i <= sqrt_N; i++) {
      if (N % i == 0) {
        divisors.push_back(i);
        if (i != N / i) {
          divisors.push_back(N / i);
        }
      }
    }

    std::sort(divisors.begin(), divisors.end());

    if (divisors.size() < static_cast<size_t>(K)) {
      return 0;
    }
    return divisors[K - 1];
  }

 private:
  int N;
  int K;
};

#ifdef BOJ_SUBMIT
#include <iostream>

int main() {
  int N, K;
  std::cin >> N >> K;

  Divisors divisors(N, K);

  int result = divisors.Calculate();
  std::cout << result << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2501_DIVISORS_H_
