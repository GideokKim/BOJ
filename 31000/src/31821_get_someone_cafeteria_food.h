#ifndef BOJ_31000_SRC_31821_GET_SOMEONE_CAFETERIA_FOOD_H_
#define BOJ_31000_SRC_31821_GET_SOMEONE_CAFETERIA_FOOD_H_

#include <iostream>
#include <vector>

class GetSomeoneCafeteriaFood {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    prices.resize(n, 0);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> prices[i];
    }
    std::cin >> m;
    menu.resize(m, 0);
    for (size_t i = 0; i < m; ++i) {
      std::cin >> menu[i];
    }
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < m; ++i) {
      result += prices[menu[i] - 1];
    }
  }
  void PrintResult() { std::cout << result; }

 private:
  size_t m;
  std::vector<int> prices;
  std::vector<int> menu;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  GetSomeoneCafeteriaFood get_someone_cafeteria_food;
  get_someone_cafeteria_food.SetInputs();
  get_someone_cafeteria_food.Calculate();
  get_someone_cafeteria_food.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31821_GET_SOMEONE_CAFETERIA_FOOD_H_
