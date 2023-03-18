// Problem: The Descent
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/the-descent

#include <iostream>
using namespace std;

int main() {

  // game loop
  while (1) {
    int a(0), b;
    for (int i = 0; i < 8; i++) {
      int mountain_h; // represents the height of one mountain.
      cin >> mountain_h;
      cin.ignore();

      if (mountain_h > a) {
        a = mountain_h;
        b = i;
      }
    }

    cout << b << endl; // The index of the mountain to fire on.
  }
}