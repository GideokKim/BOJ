#ifndef BOJ_16000_SRC_16944_SAFE_PASSWORD_H_
#define BOJ_16000_SRC_16944_SAFE_PASSWORD_H_

#include <iostream>
#include <string>

class SafePassword {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> password;
  }

  void Calculate() {
    result = 4;
    bool is_capital = false;
    bool is_small = false;
    bool is_number = false;
    bool is_special = false;
    std::string special_string = "!@#$%^&*()-+";

    for (auto target : password) {
      if ('A' <= target && target <= 'Z' && !is_capital) {
        --result;
        is_capital = true;
      } else if ('a' <= target && target <= 'z' && !is_small) {
        --result;
        is_small = true;
      } else if ('0' <= target && target <= '9' && !is_number) {
        --result;
        is_number = true;
      }

      for (auto special : special_string) {
        if (special == target && !is_special) {
          --result;
          is_special = true;
          break;
        }
      }
    }

    if (password.size() < 6) {
      result = result > (6 - password.size()) ? result : (6 - password.size());
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string password;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  SafePassword safe_password;
  safe_password.SetInputs();
  safe_password.Calculate();
  safe_password.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_16000_SRC_16944_SAFE_PASSWORD_H_
