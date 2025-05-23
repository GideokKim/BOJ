#ifndef BOJ_11000_SRC_11365_SECRET_H_
#define BOJ_11000_SRC_11365_SECRET_H_

#include <iostream>
#include <string>
#include <vector>

class Secret {
 public:
  void SetInputs() {
    std::string str;
    while (std::getline(std::cin, str)) {
      if (str == "END") {
        break;
      }
      sentences.push_back(str);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (auto target : sentences) {
      for (auto iter = target.rbegin(); iter != target.rend(); ++iter) {
        std::cout << *iter;
      }
      std::cout << "\n";
    }
  }

 private:
  std::vector<std::string> sentences;
};

#ifdef BOJ_SUBMIT
int main() {
  Secret secret;
  secret.SetInputs();
  secret.Calculate();
  secret.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11365_SECRET_H_
