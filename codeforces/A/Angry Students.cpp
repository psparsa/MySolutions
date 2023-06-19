#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int t;
  cin >> t;
  while (t--) {
    int k;
    string s1, s2;
    cin >> k >> s1;

    int ans(0);
    bool done(false);
    while (!done) {
      s2 = s1;
      done = true;

      for (int i = 1; i < k; ++i)
        if (s1[i] == 'P' && s1[i - 1] == 'A') {
          s2[i] = 'A';
          done = false;
        }

      if (done)
        break;

      s1 = s2;
      ++ans;
    }

    cout << ans << '\n';
  }
}