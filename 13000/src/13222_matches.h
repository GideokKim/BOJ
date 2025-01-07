#ifndef BOJ_13000_SRC_13222_MATCHES_H_
#define BOJ_13000_SRC_13222_MATCHES_H_

#include <cmath>
#include <iostream>
#include <string>
#include <vector>

class Matches {
 public:
  void SetInputs() {
    int n, w, h;
    std::cin >> n >> w >> h;
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

  std::vector<bool> GetMatches() { return matches; }

 private:
  std::vector<bool> matches;
};

#ifdef BOJ_SUBMIT
int main() {
  Matches matches;
  matches.SetInputs();
  std::vector<bool> result = matches.GetMatches();
  for (bool match : result) {
    if (match) {
      std::cout << "YES\n";
    } else {
      std::cout << "NO\n";
    }
  }

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13222_MATCHES_H_
