#include <bits/stdc++.h>
using namespace std;

int rec(int x) {
  if (x == 0)
    return 1;

  return (x * rec(x - 1));
}
int main() {
  int x;
  cout << "enter number: ";
  cin >> x;
  int sum = 0;
  cout << rec(x);
}
