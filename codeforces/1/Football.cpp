#include <iostream>
using namespace std;

int main() {
  string s;
  // come on!
  int x = 1;
  cin >> s;
  for (size_t i = 0; i < s.length() - 1; ++i) {
    if (x >= 7) break;
    if (s[i] == s[i + 1]) {
      ++x;
    } else {
      x = 1;
      // cout << "Ops: " << s[i] << " ~ " << s[i + 1] << endl;
    }
  }
  cout << (x >= 7 ? "YES" : "NO");
  return 0;
}