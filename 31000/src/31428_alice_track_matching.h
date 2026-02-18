#ifndef BOJ_31000_SRC_31428_ALICE_TRACK_MATCHING_H_
#define BOJ_31000_SRC_31428_ALICE_TRACK_MATCHING_H_

#include <iostream>
#include <string>
#include <vector>

class AliceTrackMatching {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    track.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> track[i];
    }
    std::cin >> hellobit_track;
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < track.size(); ++i) {
      if (hellobit_track == track[i]) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<char> track;
  char hellobit_track;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  AliceTrackMatching aliceTrackMatching;
  aliceTrackMatching.SetInputs();
  aliceTrackMatching.Calculate();
  aliceTrackMatching.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31428_ALICE_TRACK_MATCHING_H_
