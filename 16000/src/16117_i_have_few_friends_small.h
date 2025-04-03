#ifndef BOJ_16000_SRC_16117_I_HAVE_FEW_FRIENDS_SMALL_H_
#define BOJ_16000_SRC_16117_I_HAVE_FEW_FRIENDS_SMALL_H_

#include <iostream>
#include <string>

class IHaveFewFriendsSmall {
 public:
  void SetInputs() { std::cin >> input >> target_text; }

  void Calculate() {
    std::string plain_text = "";
    for (auto c : input) {
      if (isdigit(c)) {
        continue;
      }
      plain_text += c;
    }
    result = plain_text.find(target_text);
    if (result == std::string::npos) {
      result = 0;
    } else {
      result = 1;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string target_text;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  IHaveFewFriendsSmall i_have_few_friends_small;
  i_have_few_friends_small.SetInputs();
  i_have_few_friends_small.Calculate();
  i_have_few_friends_small.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_16000_SRC_16117_I_HAVE_FEW_FRIENDS_SMALL_H_
