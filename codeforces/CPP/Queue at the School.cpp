#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, t;
  string s;
  cin >> n >> t >> s;

  for (int j = 0; j < t; ++j) {
    bool isDone = true;
    for (int i = 1; i < n; ++i) {
      if (s[i] == 'G' && s[i - 1] == 'B') {
        swap(s[i], s[i - 1]);
        ++i;
        isDone = false;
      }
    }
    if (isDone) break;
  }

  cout << s;

  return 0;
}