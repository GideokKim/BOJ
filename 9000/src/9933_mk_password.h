#ifndef BOJ_9000_SRC_9933_MK_PASSWORD_H_
#define BOJ_9000_SRC_9924_MK_PASSWORD_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class MkPassword {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    passwords.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> passwords[i];
    }
  }

  void Calculate() {
    for (auto target : passwords) {
      std::string origin_target = target;
      std::reverse(target.begin(), target.end());
      if (std::find(passwords.begin(), passwords.end(), target) !=
          passwords.end()) {
        result = origin_target;
      }
    }
  }

  void PrintResult() {
    std::cout << result.size() << " " << result[result.size() >> 1];
  }

 private:
  std::vector<std::string> passwords;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  MkPassword mk_password;
  mk_password.SetInputs();
  mk_password.Calculate();
  mk_password.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9924_MK_PASSWORD_H_
