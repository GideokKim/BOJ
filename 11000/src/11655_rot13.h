#ifndef BOJ_11000_SRC_11655_ROT13_H_
#define BOJ_11000_SRC_11655_ROT13_H_

#include <iostream>
#include <string>
#include <vector>

class Rot13 {
 public:
  void SetInputs() { std::getline(std::cin, sentence); };

  void Calculate() {
    result = sentence;
    for (auto& target : result) {
      if ('a' <= target && target <= 'z') {
        target += 13;
        if ('a' <= target && target <= 'z') {
          continue;
        } else {
          target -= 26;
        }
      }
      if ('A' <= target && target <= 'Z') {
        target += 13;
        if ('A' <= target && target <= 'Z') {
          continue;
        } else {
          target -= 26;
        }
      }
    }
  }

  void PrintResult() { std::cout << result; };

 private:
  std::string sentence;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Rot13 rot13;
  rot13.SetInputs();
  rot13.Calculate();
  rot13.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11655_ROT13_H_
