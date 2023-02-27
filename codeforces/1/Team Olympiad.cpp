#include <iostream>
using namespace std;

int main() {
  int n, p = 0, m = 0, pe = 0;
  cin >> n;
  int list[n + 1];
  /*
        ti = 1, if the i-th child is good at programming,
        ti = 2, if the i-th child is good at maths,
        ti = 3, if the i-th child is good at PE
  */

  int tmp;
  for (int i = 1; i <= n; ++i) {
    cin >> tmp;
    list[i] = tmp;
    if (tmp == 1)
      ++p;
    else if (tmp == 2)
      ++m;
    else
      ++pe;
  }

  // for (int x : list) cout << x << ", ";
  // cout << endl;

  tmp = min(min(p, m), pe);

  // cout << tmp << " MMM " << endl;

  if (tmp == 0)
    cout << 0;
  else {
    // tmp = (p + m + pe) / 3;
    cout << tmp << endl;
    for (int i = 0; i < tmp; ++i) {
      for (int j = 1; j <= 3; ++j) {
        for (int x = 1; x <= n; ++x) {
          if (list[x] == j) {
            list[x] = -1;
            cout << x;

            break;
          }
        }
        cout << " ";
      }

      cout << endl;
    }
  }

  return 0;
}