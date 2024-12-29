#ifndef BOJ_MATHEMATICS_COMBINATORICS_SRC_COMBINATION_H_
#define BOJ_MATHEMATICS_COMBINATORICS_SRC_COMBINATION_H_

#include <iostream>
#include <vector>

namespace boj {
namespace mathematics {
namespace combinatorics {

class Combination {
 public:
  void SetInputs() {
    std::cin >> N >> M;
    numbers.resize(N);
    current_combination.resize(M);

    for (int i = 0; i < N; i++) {
      std::cin >> numbers[i];
    }
  }

  void GenerateCombinations(int index, int depth) {
    if (depth == M) {
      result.push_back(current_combination);
      return;
    }
    for (int i = index; i < N; i++) {
      current_combination[depth] = numbers[i];
      GenerateCombinations(i + 1, depth + 1);
    }
  }

  std::vector<std::vector<int>> GetResult() { return result; }

 private:
  int N;
  int M;
  std::vector<int> numbers;
  std::vector<std::vector<int>> result;
  std::vector<int> current_combination;
};

}  // namespace combinatorics
}  // namespace mathematics
}  // namespace boj

#endif  // BOJ_MATHEMATICS_COMBINATORICS_SRC_COMBINATION_H_
