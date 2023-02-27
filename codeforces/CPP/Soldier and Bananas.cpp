#include <iostream>
int main() {
  int k, n, w, r = 0;
  std::cin >> k >> n >> w;
  for (int x = 1; x <= w; x++) r += k * x;
  std::cout << (r >= n ? r - n : 0);
  return 0;
}