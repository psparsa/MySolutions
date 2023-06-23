// Problem: A. Remove Duplicates
// Contest: Codeforces - Codeforces Round 481 (Div. 3)
// URL: https://codeforces.com/problemset/problem/978/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n;
  cin >> n;

  int arr[50];

  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  vector<int> vec;
  int x(0);

  for (int i = n - 1; i >= 0; --i) {
    int currentValue = arr[i];

    if (find(vec.begin(), vec.end(), currentValue) == vec.end()) {
      ++x;
      vec.insert(vec.begin(), currentValue);
    }
  }

  cout << x << '\n';

  for (int x : vec)
    cout << x << ' ';

  cout << '\n';
  return 0;
}