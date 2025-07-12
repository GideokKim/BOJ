#ifndef BOJ_33000_SRC_33753_SETTING_PARKING_FEE_H_
#define BOJ_33000_SRC_33753_SETTING_PARKING_FEE_H_

#include <iostream>

class SettingParkingFee {
 public:
  void SetInputs() { std::cin >> a >> b >> c >> t; }

  void Calculate() {
    result = a;
    if (t <= 30) {
      return;
    }

    int plus_num = (t - 30) / b;
    plus_num = (t - 30) % b ? plus_num + 1 : plus_num;

    result += plus_num * c;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t a, b, c, t;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  SettingParkingFee setting_parking_fee;
  setting_parking_fee.SetInputs();
  setting_parking_fee.Calculate();
  setting_parking_fee.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33753_SETTING_PARKING_FEE_H_
