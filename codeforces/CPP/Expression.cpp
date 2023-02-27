#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int p, t;
  int answer = b;

  if (a == 1 || c == 1) {
    p = 1;
  } else {
    if (b == 1)
      p = a >= c ? c : a;
    else
      p = a >= c ? a : c;
  }

  if (p == a) {
    t = c;
  } else {
    t = a;
  }
  /******************************************/
  /******************************************/
  if (b == 1) {
    answer = p == 1 ? 2 : p + 1;
  } else {
    answer = p == 1 ? answer + p : answer * p;
  }

  answer = t == 1 ? answer + 1 : answer * t;

  cout << answer;

  return 0;
}