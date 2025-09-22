#ifndef BOJ_30000_SRC_30676_WHAT_COLOR_IS_THIS_STAR_H_
#define BOJ_30000_SRC_30676_WHAT_COLOR_IS_THIS_STAR_H_

#include <iostream>
#include <string>

class WhatColorIsThisStar {
 public:
  void SetInputs() { std::cin >> wavelength; }

  void Calculate() {
    result = "Red";

    if (wavelength < 425) {
      result = "Violet";
    } else if (wavelength < 450) {
      result = "Indigo";
    } else if (wavelength < 495) {
      result = "Blue";
    } else if (wavelength < 570) {
      result = "Green";
    } else if (wavelength < 590) {
      result = "Yellow";
    } else if (wavelength < 620) {
      result = "Orange";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t wavelength;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  WhatColorIsThisStar what_color_is_this_star;
  what_color_is_this_star.SetInputs();
  what_color_is_this_star.Calculate();
  what_color_is_this_star.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30676_WHAT_COLOR_IS_THIS_STAR_H_
