#include <bits/stdc++.h>
using namespace std;

void rec(int i, int x) {
  if (i == x)
    return;
  rec(++i, x);
  cout << i;
}
int main() {
  int x;
  cout << "enter number: ";
  cin >> x;
  rec(0, x);
}
