#include <iostream>

using namespace std;

int main(void) {
  int money;
  cin >> money;

  int count{0};

  while (money) {
    if (money < 5) {
      money -= 1;
      count++;
    }
    if (money >= 5 && money < 10) {
      money -= 5;
      count++;
    }

    if (money >= 10) {
      money -= 10;

      count++;
    }
  }
  cout << count;
}
