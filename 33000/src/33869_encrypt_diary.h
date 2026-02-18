#ifndef BOJ_33000_SRC_33869_ENCRYPT_DIARY_H_
#define BOJ_33000_SRC_33869_ENCRYPT_DIARY_H_

#include <iostream>
#include <map>
#include <string>

class EncryptDiary {
 public:
  void SetInputs() { std::cin >> w >> s; }

  void Calculate() {
    std::map<char, char> encryption;
    char plain_char = 'A';
    for (auto target : w) {
      bool is_contained = false;
      for (auto encrypt_char : encryption) {
        if (encrypt_char.second == target) {
          is_contained = true;
          break;
        }
      }
      if (!is_contained) {
        encryption[plain_char] = target;
        ++plain_char;
      }
    }

    char target_char = 'A';
    while (plain_char <= 'Z') {
      if (w.find(target_char) == std::string::npos) {
        encryption[plain_char] = target_char;
        ++plain_char;
        // std::cout << target_char << "\n";
      }
      ++target_char;
    }

    for (auto target : s) {
      result += encryption[target];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string w, s;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  EncryptDiary encrypt_diary;
  encrypt_diary.SetInputs();
  encrypt_diary.Calculate();
  encrypt_diary.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33869_ENCRYPT_DIARY_H_
