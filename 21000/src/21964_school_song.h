#ifndef BOJ_21000_SRC_21964_SCHOOL_SONG_H_
#define BOJ_21000_SRC_21964_SCHOOL_SONG_H_

#include <iostream>
#include <string>

class SchoolSong {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> str;
  }

  void Calculate() { result = str.substr(str.size() - 5); }

  void PrintResult() { std::cout << result; }

 private:
  std::string str;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  SchoolSong school_song;
  school_song.SetInputs();
  school_song.Calculate();
  school_song.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_21964_SCHOOL_SONG_H_
