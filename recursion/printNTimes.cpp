#include <bits/stdc++.h>
using namespace std;

int ctr{0};
void print(int n, const string &s) {
  if (ctr == n) {
    return;
  } else {
    cout << s << "\n";
    ctr++;
    print(n, s);
  }
}

int main() {
  int n;
  cin >> n;
  cout << "enter your name: \n";
  string name;
  cin >> name;
  print(n, name);
}
