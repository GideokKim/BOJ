#ifndef BOJ_32000_SRC_32777_SECOND_TRACK_WITH_GAHEE_H_
#define BOJ_32000_SRC_32777_SECOND_TRACK_WITH_GAHEE_H_

#include <iostream>
#include <string>
#include <vector>

class SecondTrackWithGahee {
 public:
  void SetInputs() {
    size_t q;
    std::cin >> q;
    a_stations.resize(q);
    b_stations.resize(q);

    for (size_t i = 0; i < q; ++i) {
      std::cin >> a_stations[i] >> b_stations[i];
    }
  }

  void Calculate() {
    std::string answer;
    for (size_t i = 0; i < a_stations.size(); ++i) {
      answer = "Inner circle line";
      auto diff = b_stations[i] - a_stations[i];
      if (diff >= 22) {
        answer = "Outer circle line";
      }
      if (-22 < diff && diff < 0) {
        answer = "Outer circle line";
      }
      results.emplace_back(answer);
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<long long> a_stations;
  std::vector<long long> b_stations;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SecondTrackWithGahee secondTrackWithGahee;
  secondTrackWithGahee.SetInputs();
  secondTrackWithGahee.Calculate();
  secondTrackWithGahee.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32777_SECOND_TRACK_WITH_GAHEE_H_
