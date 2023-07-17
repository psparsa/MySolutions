// Problem: B. Keep it Beautiful
// Contest: Codeforces - Educational Codeforces Round 150 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1841/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;

  while (t--) {
    int q;
    cin >> q;
    vector<int> vec;

    int stage, prevDeviation = 0;

    cin >> stage;
    vec.push_back(stage);
    cout << 1;

    for (int i = 1; i < q; ++i) {
      cin >> stage;

      int deviation = prevDeviation + (vec.back() > stage);

      if (deviation == 0 || (deviation == 1 && stage <= vec.front())) {
        // cout<<'\n';
        // cout<<"prevDeviation: "<<deviation<<'\n';
        vec.push_back(stage);
        prevDeviation = deviation;

        cout << 1;
      } else
        cout << 0;
    }

    cout << '\n';
  }

  return 0;
}