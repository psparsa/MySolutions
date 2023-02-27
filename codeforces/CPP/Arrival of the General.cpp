#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int l[n];
  for (int i = 0; i < n; ++i) cin >> l[i];

  int s = l[n - 1], sI = n - 1;
  int b = l[0], bI = 0;

  for (int i = 0; i < n; ++i) {
    if (l[i] <= s) {
      s = l[i];
      sI = i;
    } else if (l[i] > b) {
      // cout << "l[i] > b: " << (l[i] > b) << endl;
      // cout << "l[i]: " << l[i] << " b: " << b << "\n";
      b = l[i];
      bI = i;
    }
  }

  // cout << "sI: " << sI << " bI: " << bI << endl;
  int answer = (n - (sI + 1)) + bI;
  // int answer = bI;

  if (sI < bI) answer -= 1;

  cout << answer;

  return 0;
}