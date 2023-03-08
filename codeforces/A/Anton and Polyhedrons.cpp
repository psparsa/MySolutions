// Problem: A. Anton and Polyhedrons
// Contest: Codeforces - Codeforces Round 404 (Div. 2)
// URL: https://codeforces.com/problemset/problem/785/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main() {
  int n, answer(0);
  cin >> n;

  string tmp;
  while (n--) {
    cin >> tmp;
    if (tmp == "Tetrahedron") answer += 4;
    if (tmp == "Cube") answer += 6;
    if (tmp == "Octahedron") answer += 8;
    if (tmp == "Dodecahedron") answer += 12;
    if (tmp == "Icosahedron") answer += 20;
  }

  cout << answer;
  return 0;
}