// Problem: B. T-primes
// Contest: Codeforces - Codeforces Round 142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  long long int t;
  cin >> t;
  long long int tmp = 1000001;

  vector<bool> primes(tmp, true);
  // excluding 0 and 1
  primes[0] = false;
  primes[1] = false;

  // prime numbers
  for (long long int i = 2; i * i <= tmp; ++i)
    if (primes[i])
      for (long long int j = i; i * j <= tmp; ++j) primes[i * j] = false;

  set<long long int> squares;

  for (long long int i = 2; i <= tmp; i++)
    if (primes[i]) squares.insert(i * i);

  long long int tmp2;
  while (t--) {
    cin >> tmp2;
    cout << ((squares.find(tmp2) != squares.end()) ? "YES" : "NO") << endl;
  }

  // for (long long int x : squares) cout << x << " ";

  return 0;
}