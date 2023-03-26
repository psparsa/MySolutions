// Problem: A. Plus One on the Subset
// Contest: Codeforces - Codeforces Round 764 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1624/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <algorithm>
#include <array>
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

  int n;
  int arr[10000];
  int biggest;
  int smallest;
  while (t--) {
    biggest = 0;
    smallest = 1000000000;

    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
      biggest = max(arr[i], biggest);
    }

    for (int i = 0; i < n; ++i) {
      smallest = min(arr[i], smallest);
    }

    cout << biggest - smallest << endl;
  }

  return 0;
}