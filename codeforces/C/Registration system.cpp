// Problem: C. Registration system
// Contest: Codeforces - Codeforces Beta Round 4 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/4/C
// Memory Limit: 64 MB
// Time Limit: 5000 ms

#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  map<string, int> db;
  string tmp;

  cin >> n;
  while (n--) {
    cin >> tmp;
    bool found = db.find(tmp) == db.end();
    cout << (found ? "OK" : tmp + to_string(db[tmp])) << endl;
    db[tmp] = found ? 1 : db[tmp] + 1;
  }

  return 0;
}