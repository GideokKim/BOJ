#ifndef BOJ_30000_SRC_30868_OPENING_VOTE_H_
#define BOJ_30000_SRC_30868_OPENING_VOTE_H_

#include <iostream>
#include <string>
#include <vector>

class OpeningVote {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    votes.resize(n);
    results.resize(n, "");

    for (auto& target : votes) {
      std::cin >> target;
    }
  }

  void Calculate() {
    auto result = results.begin();
    for (auto target : votes) {
      for (size_t i = 0; i < target / 5; ++i) {
        *result += "++++ ";
      }

      for (size_t i = 0; i < target % 5; ++i) {
        *result += "|";
      }
      ++result;
    }
  }

  void PrintResult() {
    for (auto target : results) {
      std::cout << target << "\n";
    }
  }

 private:
  std::vector<size_t> votes;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  OpeningVote opening_vote;
  opening_vote.SetInputs();
  opening_vote.Calculate();
  opening_vote.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30868_OPENING_VOTE_H_
