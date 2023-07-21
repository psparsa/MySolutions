// Problem: B. Sort the Array
// Contest: Codeforces - Codeforces Round 258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

#define nl cout << '\n';

int
main()
{
  int n;
  cin >> n;

  vector<int> vec(n);
  cin >> vec[0];

  bool isSortedA = true;
  bool isSortedB = true;

  for (int i = 1; i < n; ++i) {
    cin >> vec[i];

    if (vec[i] < vec[i - 1])
      isSortedA = false;

    if (vec[i] > vec[i - 1])
      isSortedB = false;
  }

  if (isSortedA) {
    cout << "yes" << '\n' << 1 << ' ' << 1 << '\n';
    return 0;
  }

  if (isSortedB) {
    cout << "yes" << '\n' << 1 << ' ' << n << '\n';
    return 0;
  }

  vector<int> sortedVec = vec;
  sort(sortedVec.begin(), sortedVec.end());

  // nl;
  // for (int i : sortedVec)
  // cout << i << ' ';
  // nl;

  int a, b = n;

  int x = 0;
  bool diffStarted = false;
  for (int i = 0; i < n; ++i) {
    if (x > 1) {
      cout << "no";
      return 0;
    }

    if (vec[i] == sortedVec[i] && diffStarted) {
      // nl;
      // cout << i;
      // nl;
      if (i == n - 1) {
        diffStarted = false;
        b = i;
      } else {
        if (vec[i + 1] == sortedVec[i + 1]) {
          diffStarted = false;
          b = i;
        }
      }
    }

    if (vec[i] != sortedVec[i]) {
      if (diffStarted == false) {
        diffStarted = true;
        ++x;
        a = i + 1;
      }
    }
  }

  // cout << "Original:" << '\n';
  // for (int i : vec)
  // cout << i << ", ";
  // cout << "\n";

  reverse(vec.begin() + a - 1, vec.begin() + b);

  bool fSort = true;

  for (int i = 1; i < n; ++i) {
    if (vec[i - 1] > vec[i]) {
      fSort = false;
      break;
    }
  }

  if (!fSort) {
    cout << "no" << '\n';
    return 0;
  }

  // cout << "Attention:" << '\n';
  // for (int i : vec)
  // cout << i << ", ";
  // cout << "\n";

  cout << "yes" << '\n' << a << ' ' << b << '\n';
  return 0;
}
