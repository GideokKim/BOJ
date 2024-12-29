#ifndef BOJ_1000_SRC_1759_CREATE_PASSWORD_H_
#define BOJ_1000_SRC_1759_CREATE_PASSWORD_H_

#include <algorithm>
#include <iostream>
#include <vector>

class CreatePassword {
 public:
  void SetInputs() {
    std::cin >> L >> C;
    characters.resize(C);
    for (int i = 0; i < C; i++) {
      std::cin >> characters[i];
    }
    std::sort(characters.begin(), characters.end());
    password.resize(L);
  }

  void GeneratePasswords(int index, int depth) {
    if (depth == L) {
      if (IsValidPassword(password)) {
        result.push_back(password);
      }
      return;
    }
    for (int i = index; i < C; i++) {
      password[depth] = characters[i];
      GeneratePasswords(i + 1, depth + 1);
    }
  }

  void PrintResult() {
    for (const auto& password : result) {
      std::cout << password << '\n';
    }
  }

  std::vector<std::string> GetResult() { return result; }

 private:
  bool IsValidPassword(const std::string& password) {
    int vowels = 0;
    int consonants = 0;
    for (char c : password) {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        vowels++;
      } else {
        consonants++;
      }
    }
    return vowels >= 1 && consonants >= 2;
  }

  int L;
  int C;
  std::vector<char> characters;
  std::vector<std::string> result;
  std::string password;
};

#ifdef BOJ_SUBMIT
int main() {
  CreatePassword create_password;
  create_password.SetInputs();
  create_password.GeneratePasswords(0, 0);
  create_password.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1759_CREATE_PASSWORD_H_
