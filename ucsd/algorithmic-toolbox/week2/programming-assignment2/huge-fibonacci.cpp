#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>
using namespace std;

int64_t fib(int64_t n) {
  return ((((1 + pow(sqrt(5), n) / 2))) - (((1 + pow(sqrt(5), n) / 2)))) /
         sqrt(5);
}
int main(void) {

  int64_t n;
  cin >> n;
  int m;
  cin >> m;

  cout << fib(n) % m;
}
