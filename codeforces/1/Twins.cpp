#include <algorithm>
#include <iostream>
using namespace std;

bool compare(int a, int b) { return (a > b); }

int main() {
  int n;
  cin >> n;
  int list[100];
  int broSum = 0, mySum = 0, c = 0;

  for (int i = 0; i < n; ++i) {
    cin >> list[i];
    broSum = broSum + list[i];
  }

  sort(list, list + n, compare);

  for (int i = 0; i < n; ++i) {
    mySum = mySum + list[i];
    broSum = broSum - list[i];
    ++c;
    if (mySum > broSum) {
      break;
    }
  }

  cout << c << endl;
  return 0;
}