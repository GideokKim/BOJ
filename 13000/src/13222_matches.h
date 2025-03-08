#ifndef BOJ_13000_SRC_13222_MATCHES_H_
#define BOJ_13000_SRC_13222_MATCHES_H_

#include <cmath>
#include <iostream>
#include <string>
#include <vector>

class Matches {
 public:
  void SetInputs() { std::cin >> n >> w >> h; }

  void Calculate() {
    int length = static_cast<int>(std::sqrt(w * w + h * h));
    matches.resize(n);

    int input;
    for (int i = 0; i < n; ++i) {
      std::cin >> input;
      if (input <= length) {
        matches[i] = true;
      } else {
        matches[i] = false;
      }
    }
  }

  void PrintResult() {
    for (bool match : matches) {
      if (match) {
        std::cout << "YES\n";
      } else {
        std::cout << "NO\n";
      }
    }
  }

 private:
  int n, w, h;
  std::vector<bool> matches;
};

#ifdef BOJ_SUBMIT
int main() {
  Matches matches;
  matches.SetInputs();
  matches.Calculate();
  matches.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13222_MATCHES_H_
