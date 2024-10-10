#include <bits/stdc++.h>
using namespace std;

void rec(int x) {
  if (x < 0)
    return;
  cout << x;
  // x -= 1;
  // rec(x);
  rec(--x);
}
int main() {
  int x;
  cout << "enter a number: ";
  cin >> x;
  rec(x);
}
