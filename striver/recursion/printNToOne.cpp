#include <bits/stdc++.h>
using namespace std;

void print(int n, int a) {
  if (a > n) {
    return;
  } else {
    cout << a << " ";
    a++;
    print(n, a);
  }
  return;
}
int main() {

  cout << "enter a number: \n";
  int n;
  cin >> n;
  print(n, 1);
}
