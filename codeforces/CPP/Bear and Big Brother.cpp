// Problem: A. Bear and Big Brother
// Contest: Codeforces - Codeforces Round #405 (rated, Div. 2, based on VK Cup
// 2017 Round 1) URL: https://codeforces.com/problemset/problem/791/A Memory
// Limit: 256 MB Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main() {
  int a, b, r = 0;
  cin >> a;
  cin >> b;

  while (a <= b) {
    a = a * 3;
    b = b * 2;
    ++r;
  }

  cout << r;
  return 0;
}
