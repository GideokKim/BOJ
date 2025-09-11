#ifndef BOJ_10000_SRC_10102_OPENNING_VOTE_H_
#define BOJ_10000_SRC_10102_OPENNING_VOTE_H_

#include <iostream>
#include <string>

class OpeningVote {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> vote;
  }

  void Calculate() {
    long long count = 0;
    for (auto target : vote) {
      if (target == 'A') {
        ++count;
      } else {
        --count;
      }
    }

    if (count > 0) {
      result = "A";
    } else if (count < 0) {
      result = "B";
    } else {
      result = "Tie";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string vote;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  OpeningVote openingVote;
  openingVote.SetInputs();
  openingVote.Calculate();
  openingVote.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10102_OPENNING_VOTE_H_
