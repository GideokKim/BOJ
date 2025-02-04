#ifndef BOJ_1000_SRC_1620_IM_POKEMON_MASTER_H_
#define BOJ_1000_SRC_1620_IM_POKEMON_MASTER_H_

#include <iostream>
#include <queue>

class ImPokemonMaster {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> m;

    for (int i = 0; i < n; ++i) {
      numbers.push(i + 1);
    }
  }

  void Calculate() {
    while (!numbers.empty()) {
      for (int i = 0; i < k - 1; ++i) {
        numbers.push(numbers.front());
        numbers.pop();
      }
      result.push_back(numbers.front());
      numbers.pop();
    }
  }

  void PrintResult() {
    std::cout << '<';
    for (size_t index = 0; index < result.size() - 1; ++index) {
      std::cout << result[index];
      std::cout << ", ";
    }
    std::cout << result.back() << '>';
  }

 private:
  size_t m;
  std::vector<std::string> illustration;
};

#ifdef BOJ_SUBMIT
int main() {
  ImPokemonMaster im_pokemon_master;
  im_pokemon_master.SetInputs();
  im_pokemon_master.Calculate();
  im_pokemon_master.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1620_IM_POKEMON_MASTER_H_
