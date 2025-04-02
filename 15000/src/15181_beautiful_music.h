#ifndef BOJ_15000_SRC_15181_BEAUTIFUL_MUSIC_H_
#define BOJ_15000_SRC_15181_BEAUTIFUL_MUSIC_H_

#include <iostream>
#include <vector>

class BeautifulMusic {
 public:
  void SetInputs() {
    std::string input;
    while (true) {
      std::cin >> input;
      if (input == "#") {
        break;
      }

      bool is_beautiful = true;
      for (size_t i = 0; i < input.size() - 1; ++i) {
        int diff = input[i + 1] - input[i];
        if (diff < 0) {
          diff += 7;
        }

        if (diff == 2 || diff == 4 || diff == 6) {
          continue;
        } else {
          is_beautiful = false;
          break;
        }
      }
      results.push_back(is_beautiful);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      if (results[i]) {
        std::cout << "That music is beautiful." << std::endl;
      } else {
        std::cout << "Ouch! That hurts my ears." << std::endl;
      }
    }
  }

 private:
  std::vector<bool> results;
};

#ifdef BOJ_SUBMIT
int main() {
  BeautifulMusic beautiful_music;
  beautiful_music.SetInputs();
  beautiful_music.Calculate();
  beautiful_music.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15181_BEAUTIFUL_MUSIC_H_
