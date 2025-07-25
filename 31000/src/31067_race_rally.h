#ifndef BOJ_31000_SRC_31067_RACE_RALLY_H_
#define BOJ_31000_SRC_31067_RACE_RALLY_H_

#include <iostream>
#include <vector>

class RaceRally {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    tracks.resize(n, 0);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> tracks[i];
    }
  }

  void Calculate() {
    result = 0;
    for (size_t i = 1; i < n; ++i) {
      if (tracks[i - 1] < tracks[i]) {
        continue;
      }

      tracks[i] += k;
      ++result;
      if (tracks[i - 1] < tracks[i]) {
        continue;
      } else {
        result = -1;
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, k;
  std::vector<size_t> tracks;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  RaceRally race_rally;
  race_rally.SetInputs();
  race_rally.Calculate();
  race_rally.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31067_RACE_RALLY_H_
