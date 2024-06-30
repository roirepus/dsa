#include <bits/stdc++.h>
using namespace std;

void summ(int n, int sum) {
  if (n < 1) {
    cout << sum;
    return;
  } else {
    summ(n - 1, sum + n);
  }

  return;
}
int main() {
  cout << "enter a number: \n";

  int n;
  cin >> n;
  summ(n, 0);
}
