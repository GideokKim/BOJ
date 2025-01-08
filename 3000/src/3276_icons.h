#ifndef BOJ_3000_SRC_3276_ICONS_H_
#define BOJ_3000_SRC_3276_ICONS_H_

#include <iostream>
#include <vector>

class Icons {
 public:
  void SetInputs() { std::cin >> number; }

  void Calculate() {
    std::vector<int> row(100);
    std::vector<int> column(100);
    int min_add = 200;
    int mul = 0;
    int add = 0;

    optimized_row = 100;
    optimized_column = 100;

    for (size_t index = 0; index < 100; ++index) {
      row[index] = index + 1;
      column[index] = index + 1;
    }
    for (size_t row_index = 0; row_index < number; ++row_index) {
      for (size_t column_index = 0; column_index < number; ++column_index) {
        mul = row[row_index] * column[column_index];
        add = row[row_index] + column[column_index];
        if (mul >= number && add < min_add) {
          optimized_row = row[row_index];
          optimized_column = column[column_index];
          min_add = add;
        }
      }
    }
  }

  void PrintOptimizedRowAndColumn() {
    std::cout << optimized_row << " " << optimized_column << "\n";
  }

 private:
  int number;
  int optimized_row;
  int optimized_column;
};

#ifdef BOJ_SUBMIT
int main() {
  Icons icons;
  icons.SetInputs();
  icons.Calculate();
  icons.PrintOptimizedRowAndColumn();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_6000_SRC_6190_ANOTHER_COW_NUMBER_GAME_H_
