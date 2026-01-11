#ifndef BOJ_32000_SRC_32132_IT_IS_NOT_PLAYSTATION_H_
#define BOJ_32000_SRC_32132_IT_IS_NOT_PLAYSTATION_H_

#include <iostream>
#include <string>

class ItIsNotPlaystation {
 public:
  void SetInputs() { std::cin >> n >> input_string; }

  void Calculate() {
    size_t index = 0;
    while (true) {
      if (input_string.find("PS5") != std::string::npos) {
        index = input_string.find("PS5");
      } else if (input_string.find("PS4") != std::string::npos) {
        index = input_string.find("PS4");
      } else {
        break;
      }
      input_string.erase(input_string.begin() + index + 2);
    }
    result = input_string;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string input_string;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ItIsNotPlaystation it_is_not_playstation;
  it_is_not_playstation.SetInputs();
  it_is_not_playstation.Calculate();
  it_is_not_playstation.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32132_IT_IS_NOT_PLAYSTATION_H_
