#include <iostream>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  string tmp = s1;

  for (int i = 0; i < s1.size(); ++i) tmp[i] = (s1[i] == s2[i] ? '0' : '1');

  cout << tmp;
  return 0;
}