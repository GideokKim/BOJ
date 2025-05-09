#ifndef BOJ_25000_SRC_25372_PASSWORD_H_
#define BOJ_25000_SRC_25372_PASSWORD_H_

#include <iostream>
#include <string>
#include <vector>

class Password {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    passwords.resize(n);
    results.resize(n, "no\n");
    for (size_t i = 0; i < n; ++i) {
      std::cin >> passwords[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < passwords.size(); ++i) {
      auto length = passwords[i].size();
      if (6 <= length && length <= 9) {
        results[i] = "yes\n";
      }
    }
  }

  void PrintResult() {
    for (auto target : results) {
      std::cout << target;
    }
  }

 private:
  std::vector<std::string> passwords;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Password password;
  password.SetInputs();
  password.Calculate();
  password.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25372_PASSWORD_H_