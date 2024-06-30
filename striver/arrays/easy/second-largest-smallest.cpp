#include <climits>
#include <iostream>

using namespace std;

int secondLargest(int *arr, int n) {

  int maxi{INT_MIN};
  int smaxi{INT_MIN};
  for (int i = 0; i < n; i++) {
    maxi = max(maxi, arr[i]);
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] < maxi) {
      smaxi = max(smaxi, arr[i]);
    }
  }

  return smaxi;
}
int secondSmallest(int *arr, int n) {
  int smol{INT_MAX};
  int ssmol{INT_MAX};
  for (int i = 0; i < n; i++) {
    smol = min(smol, arr[i]);
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] > smol) {
      ssmol = min(ssmol, arr[i]);
    }
  }
  return ssmol;
}
int main() {
  int arr[6] = {3, 5, 1, 8, 8, 4};
  int a = 6;
  cout << secondLargest(arr, a) << '\n';
  cout << secondSmallest(arr, a);
}
