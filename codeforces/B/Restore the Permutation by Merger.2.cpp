// Problem: B. Restore the Permutation by Merger
// Contest: Codeforces - Codeforces Round 656 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1385/B
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

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int values[100];
    for (int i = 0; i < n * 2; ++i)
      cin >> values[i];

    vector<int> vec;
    for (int i = 0; i < n * 2; ++i)
      if (find(vec.begin(), vec.end(), values[i]) == vec.end())
        vec.push_back(values[i]);

    for (int x : vec)
      cout << x << ' ';
    cout << '\n';
  }
  return 0;
}