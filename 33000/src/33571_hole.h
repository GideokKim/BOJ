#ifndef BOJ_33000_SRC_33571_HOLE_H_
#define BOJ_33000_SRC_33571_HOLE_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Hole {
 public:
  void SetInputs() {
    getline(std::cin, sentence);
    one_hole = {'A', 'a', 'b', 'D', 'd', 'e', 'g', 'O',
                'o', 'P', 'p', 'Q', 'q', 'R', '@'};
  }

  void Calculate() {
    result = 0;
    for (auto target : sentence) {
      if (std::find(one_hole.begin(), one_hole.end(), target) !=
          one_hole.end()) {
        ++result;
      } else if (target == 'B') {
        result += 2;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<char> one_hole;
  std::string sentence;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Hole hole;
  hole.SetInputs();
  hole.Calculate();
  hole.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33571_HOLE_H_
