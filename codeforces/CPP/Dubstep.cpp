#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool needsSpace = false;
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      if (needsSpace) {
        cout << ' ';
        needsSpace = false;
      }
      i = i + 2;
    } else {
      needsSpace = true;
      cout << s[i];
    }
  }

  return 0;
}