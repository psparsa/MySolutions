#include <iostream>
#include <string>

int main() {
  int n;
  std::string s;
  std::cin >> n;
  std::cin >> s;

  int r = 0;

  for (int i = 0; i < n - 1; ++i) {
    if (s[i] == s[i + 1]) ++r;
  }

  std::cout << r;

  return 0;
}