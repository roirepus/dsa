#include <bits/stdc++.h>
using namespace std;

void print(int a, int n) {
  if (a < 1) {
    return;
  } else {
    print(a - 1, n);
    cout << a << " ";
  }
  return;
}
int main() {
  cout << "enter a number: \n";
  int n;
  cin >> n;
  print(n, n);
}
