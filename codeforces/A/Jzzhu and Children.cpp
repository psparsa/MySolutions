// Problem: A. Jzzhu and Children
// Contest: Codeforces - Codeforces Round 257 (Div. 2)
// URL: https://codeforces.com/problemset/problem/450/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<array<int, 2>> vec;

  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    vec.push_back({i, tmp});
  }

  for (size_t i = 0; vec.size() != 1; ++i) {
    int c = vec[0][1] - m;

    if (c > 0) vec.insert(vec.end(), {vec[0][0], c});

    vec.erase(vec.begin());
  }

  cout << vec[0][0] + 1 << endl;

  return 0;
}