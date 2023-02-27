#include <iostream>
using namespace std;

int main() {
  string n;
  cin >> n;
  int x;
  for (int i = n.size() - 1; i > -1; --i)
    if (n[i] == '4' || n[i] == '7') ++x;
  cout << (x == 4 || x == 7 ? "YES" : "NO");
  return 0;
}
