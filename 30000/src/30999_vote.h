#ifndef BOJ_30000_SRC_30999_VOTE_H_
#define BOJ_30000_SRC_30999_VOTE_H_

#include <iostream>
#include <string>
#include <vector>

class Vote {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    votes.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> votes[i];
    }
  }

  void Calculate() {
    result = 0;
    for (auto& vote : votes) {
      size_t count = 0;
      for (auto& target : vote) {
        if (target != 'X') {
          ++count;
        }
      }
      if (count > (m / 2)) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<std::string> votes;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Vote vote;
  vote.SetInputs();
  vote.Calculate();
  vote.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30999_VOTE_H_
