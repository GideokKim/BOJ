#ifndef BOJ_24000_SRC_24051_ALGORITHM_CLASS_INSERT_SORT_1_H_
#define BOJ_24000_SRC_24051_ALGORITHM_CLASS_INSERT_SORT_1_H_

#include <iostream>
#include <vector>

class InsertSort1 {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    arr.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> arr[i];
    }
  }

  void Calculate() {
    result = -1;
    size_t cnt = 0;
    for (size_t i = 1; i < n; ++i) {
      long long new_item = arr[i];
      long long loc = i - 1;

      while (0 <= loc && new_item < arr[loc]) {
        arr[loc + 1] = arr[loc];
        cnt++;
        if (cnt == k) {
          result = arr[loc + 1];
          return;
        }

        loc--;
      }

      if (loc + 1 != i) {
        arr[loc + 1] = new_item;

        cnt++;
        if (cnt == k) {
          result = arr[loc + 1];
          return;
        }
      }
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  size_t n, k;
  std::vector<long long> arr;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  InsertSort1 insert_sort_1;
  insert_sort_1.SetInputs();
  insert_sort_1.Calculate();
  insert_sort_1.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24051_ALGORITHM_CLASS_INSERT_SORT_1_H_
