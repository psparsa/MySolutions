#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int s[4];
  cin >> s[0] >> s[1] >> s[2] >> s[3];

  vector<int> vec;
  int x = 0;
  for (int i = 0; i < 4; ++i) {
    if (find(vec.begin(), vec.end(), s[i]) == vec.end()) {
      // cout << "Ping: " << s[i] << '\n';
      vec.push_back(s[i]);
    }
  }

  cout << (4 - vec.size());

  return 0;
}