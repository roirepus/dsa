#include <bits/stdc++.h>
using namespace std;

int64_t brute(int *v, int n) {

  int64_t product = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      product = max(product, (int64_t)(v[i]) * (int64_t)(v[j]));
    }
  }
  return product;
}

int64_t sol(int *v, int n) {
  int index = -1;
  int largest = 0;
  for (int i = 0; i < n; i++) {
    largest = max(largest, v[i]);
    if (largest == v[i]) {
      index = i;
    }
  }

  int secondLargest = 0;

  for (int i = 0; i < n; i++) {
    if (i != index) {
      secondLargest = max(secondLargest, v[i]);
    }
  }
  int64_t result = int64_t(largest) * int64_t(secondLargest);
  return result;
}
int main() {
  while (true) {
    int n = rand() % 10 + 2;
    cout << n << '\n';
    int a[n];
    for (int i = 0; i < n; i++) {
      a[i] = rand() % 100000;
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << '\n';

    int64_t res1 = brute(a, n);
    int64_t res2 = sol(a, n);

    if (res1 != res2) {
      cout << "wrong answer: " << res1 << ' ' << res2 << '\n';
      break;
    } else {
      cout << "OK\n";
    }
  }
  int n;
  cin >> n;
  int v[n];
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  return 0;
}
