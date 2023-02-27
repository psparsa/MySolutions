#include <iostream>
using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int answer = min(min(k * l / nl, c * d), p / np) / n;

  cout << answer;

  return 0;
}