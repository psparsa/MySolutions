// Problem: A. Sum of Round Numbers
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <vector>
using namespace std;

int
main()
{
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> vec;
    int pow(1);

    for (int i = n; i > 0; i /= 10) {

      if ((i % 10) > 0)
        vec.insert(vec.begin(), (i % 10) * pow);

      pow *= 10;
    }

    cout << vec.size() << endl;
    for (int i : vec)
      cout << i << " ";
    cout << endl;
  }

  return 0;
}