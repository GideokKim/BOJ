#ifndef BOJ_2000_SRC_2897_MONSTER_TRUCK_H_
#define BOJ_2000_SRC_2897_MONSTER_TRUCK_H_

#include <iostream>
#include <string>
#include <vector>

class MonsterTruck {
 public:
  void SetInputs() {
    std::cin >> r >> c;
    parking_lot.resize(r);
    for (auto& target : parking_lot) {
      std::cin >> target;
    }
    results.resize(5);
  }

  void Calculate() {
    std::vector<size_t> x_coordinates = {0, 0, 1, 1};
    std::vector<size_t> y_coordinates = {0, 1, 0, 1};
    for (size_t i = 0; i < r - 1; ++i) {
      for (size_t j = 0; j < c - 1; ++j) {
        size_t car_count = 0;
        bool is_building = false;
        for (size_t k = 0; k < x_coordinates.size(); ++k) {
          size_t x_index = i + x_coordinates[k];
          size_t y_index = j + y_coordinates[k];
          if (parking_lot[x_index][y_index] == '#') {
            is_building = true;
            break;
          } else if (parking_lot[x_index][y_index] == 'X') {
            ++car_count;
          }
        }

        if (is_building) {
          continue;
        }
        ++results[car_count];
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  size_t r, c;
  std::vector<std::string> parking_lot;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  MonsterTruck monster_truck;
  monster_truck.SetInputs();
  monster_truck.Calculate();
  monster_truck.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2897_MONSTER_TRUCK_H_
