#include <iostream>
using namespace std;

int main() {
  int n, serja = 0, dima = 0;
  cin >> n;
  int cards[n + 1];

  for (int i = 0; i < n; ++i) cin >> cards[i];
  bool isSTurn = true;

  int start = 0, end = n - 1, l, r;
  while (start <= end) {
    l = cards[start];
    r = cards[end];

    if (l > r)
      start++;
    else
      end--;

    // cout << "l: " << l << " r: " << r << '\n';

    if (isSTurn) {
      serja += max(l, r);
    } else {
      dima += max(l, r);
    }

    isSTurn = !isSTurn;
  }

  cout << serja << ' ' << dima;

  return 0;
}