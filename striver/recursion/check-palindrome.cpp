#include <bits/stdc++.h>
#include <string>
using namespace std;

bool palindrome(int l, string s) {
  if (s[l] == s[s.length() - l - 1]) {
    palindrome(++l, s);
    return true;
  } else {
    return false;
  }
  return true;
}
int main(int argc, char *argv[]) {
  string s = "aba";
  int l = 0;
  palindrome(l, s) ? cout << "true" : cout << "false";
  return 0;
}
