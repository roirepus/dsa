#include <bits/stdc++.h>
using namespace std;

class Node {

public:
  int data;
  Node *next;

  Node(int data1, Node *next1) {
    data = data1;
    next = next1;
  }
};

int main() {

  vector<int> v = {2, 5, 8, 6};
  Node *y = new Node(v[0], nullptr);
  cout << y->data;

  return 0;
}
