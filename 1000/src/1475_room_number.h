#ifndef BOJ_1000_SRC_1475_ROOM_NUMBER_H_
#define BOJ_1000_SRC_1475_ROOM_NUMBER_H_

#include <iostream>
#include <vector>

class RoomNumber {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    std::vector<size_t> num_list(10, 0);
    while (n) {
      auto target = n % 10;
      if (target == 9) {
        target = 6;
      }
      ++num_list[target];
      n /= 10;
    }
    num_list[6] = (num_list[6] % 2) + (num_list[6] / 2);

    result = 0;
    for (auto num : num_list) {
      if (num > result) {
        result = num;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  RoomNumber room_number;
  room_number.SetInputs();
  room_number.Calculate();
  room_number.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1475_ROOM_NUMBER_H_
