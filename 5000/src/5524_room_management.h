#ifndef BOJ_5000_SRC_5524_ROOM_MANAGEMENT_H_
#define BOJ_5000_SRC_5524_ROOM_MANAGEMENT_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class RoomManagement {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    names.resize(n);
    for (size_t index = 0; index < n; ++index) {
      std::cin >> names[index];
      std::transform(names[index].begin(), names[index].end(),
                     names[index].begin(), ::tolower);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (const auto& name : names) {
      std::cout << name << "\n";
    }
  }

 private:
  std::vector<std::string> names;
};

#ifdef BOJ_SUBMIT
int main() {
  RoomManagement room_management;
  room_management.SetInputs();
  room_management.Calculate();
  room_management.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5524_ROOM_MANAGEMENT_H_
