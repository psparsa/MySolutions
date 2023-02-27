#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] == '.') {
      cout << '0';
    } else if (s[i] == '-') {
      cout << (s[i + 1] == '.' ? 1 : 2);
      ++i;
    }
  }

  return 0;
}