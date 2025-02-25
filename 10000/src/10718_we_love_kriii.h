#ifndef BOJ_10000_SRC_10718_WE_LOVE_KRIII_H_
#define BOJ_10000_SRC_10718_WE_LOVE_KRIII_H_

#include <iostream>

class WeLoveKriii {
 public:
  void SetInputs() {}

  void Calculate() {}

  void PrintResult() {
    std::cout << "강한친구 대한육군" << std::endl;
    std::cout << "강한친구 대한육군" << std::endl;
  }
};

#ifdef BOJ_SUBMIT
int main() {
  WeLoveKriii we_love_kriii;
  we_love_kriii.SetInputs();
  we_love_kriii.Calculate();
  we_love_kriii.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10718_WE_LOVE_KRIII_H_
