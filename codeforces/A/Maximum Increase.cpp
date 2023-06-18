// 23:55
#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int n, t1(1), t2(1);
  cin >> n;
  vector<int> vec(n);

  for (int i = 0; i < n; ++i)
    cin >> vec[i];
  for (int i = 1; i < n; ++i)
    if (vec[i - 1] < vec[i])
      t2++;
    else {
      t1 = max(t1, t2);
      t2 = 1;
    }

  t1 = max(t1, t2);

  cout << t1 << '\n';
  return 0;
}