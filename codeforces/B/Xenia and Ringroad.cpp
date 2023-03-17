// Problem: B. Xenia and Ringroad
// Contest: Codeforces - Codeforces Round 197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int
main()
{
  int n, m, p(1);
  cin >> n >> m;

  unsigned long long int a(0);

  int moves;
  int dest;
  for (int i = 0; i < m; ++i) {
    cin >> dest;

    if (p == dest)
      moves = 0;
    else
      moves = p > dest ? (n - p) + dest : abs(p - dest);

    // cout << "pos: " << p << " dest: " << dest << " moves: " << moves << endl;
    p = dest; // 3 ~> 2 ~> 3
    a += moves;
  }

  cout << a;
  return 0;
}