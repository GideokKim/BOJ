#ifndef BOJ_25000_SRC_25640_MBTI_H_
#define BOJ_25000_SRC_25640_MBTI_H_

#include <iostream>
#include <string>
#include <vector>

class MBTI {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> jin;
    std::cin >> n;
    friends.resize(n);

    for (size_t i = 0; i < n; i++) {
      std::cin >> friends[i];
    }
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < friends.size(); i++) {
      if (friends[i] == jin) {
        result++;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string jin;
  std::vector<std::string> friends;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  MBTI mbti;
  mbti.SetInputs();
  mbti.Calculate();
  mbti.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25640_MBTI_H_
