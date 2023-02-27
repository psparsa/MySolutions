#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int l[n] = {0};
  for (int i = 0; i < n; ++i) cin >> l[i];
  sort(l, l + n);

  int t = l[0], a = 0;

  for (int x : l) cout << x << ", ";
  cout << endl << endl;

  for (int i = 1; i < n; ++i) {
    cout << "l[i]: " << l[i] << " t: " << t << endl;

    if ((l[i] + t) <= 4) {
      t += l[i];
      if (t == 4) {
        ++a;
        t = 0
      }
    } else {
      a += l[i] == 4 ? 2 : 1;
      t = l[i] == 4 ? 0 : l[i];
    }

    cout << "t: " << t << " a: " << a << endl << endl;
  }

  cout << a;

  return 0;
}