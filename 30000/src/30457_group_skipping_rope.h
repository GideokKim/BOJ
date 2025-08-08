#ifndef BOJ_30000_SRC_30457_GROUP_SKIPPING_ROPE_H_
#define BOJ_30000_SRC_30457_GROUP_SKIPPING_ROPE_H_

#include <iostream>
#include <vector>

class GroupSkippingRope {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    height.resize(1001, 0);
    size_t target;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> target;
      ++height[target];
    }
  }

  void Calculate() {
    result = 0;
    for (auto target : height) {
      result += target >= 2 ? 2 : target;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> height;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  GroupSkippingRope group_skipping_rope;
  group_skipping_rope.SetInputs();
  group_skipping_rope.Calculate();
  group_skipping_rope.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30457_GROUP_SKIPPING_ROPE_H_
