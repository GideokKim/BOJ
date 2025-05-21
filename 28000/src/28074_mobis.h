#ifndef BOJ_28000_SRC_28074_MOBIS_H_
#define BOJ_28000_SRC_28074_MOBIS_H_

#include <iostream>
#include <set>
#include <string>

class Mobis {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    std::set<char> mobis;

    for (auto target : input) {
      if (target == 'M' || target == 'O' || target == 'B' || target == 'I' ||
          target == 'S') {
        mobis.insert(target);
      }
    }

    if (mobis.size() == 5) {
      result = "YES";
    } else {
      result = "NO";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Mobis mobis;
  mobis.SetInputs();
  mobis.Calculate();
  mobis.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28074_MOBIS_H_
