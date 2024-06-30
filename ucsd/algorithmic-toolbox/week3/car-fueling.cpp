#include <iostream>

using namespace std;

int main(void) {

  int d;
  cin >> d;
  int m;
  cin >> m;

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {

    cin >> arr[i];
  }
  int count = 0;
  int i = 0;
  while (d) {
    if (arr[i + 1] - arr[i] > m) {
      count++;
      d -= m - arr[i];
      i++;

    } else {
      m -= arr[i];
      d -= arr[i];
      i++;
    }
  }
  cout << count;
}
