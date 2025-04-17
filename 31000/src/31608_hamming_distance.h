#ifndef BOJ_31000_SRC_31608_HAMMING_DISTANCE_H_
#define BOJ_31000_SRC_31608_HAMMING_DISTANCE_H_

#include <iostream>
#include <string>

class HammingDistance {
 public:
  void SetInputs() { std::cin >> n >> s >> t; }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < n; ++i) {
      result += s[i] != t[i];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string s, t;
  int result;
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

#endif  // BOJ_31000_SRC_31608_HAMMING_DISTANCE_H_
