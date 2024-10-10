#include <bits/stdc++.h>
#include <iostream>
#include <stack>
class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int x) {
    this->data = x;
    this->left = nullptr;
    this->right = nullptr;
  }
};

void inorder(Node *root) {

  std::stack<Node *> st;
  while (true) {
    if (root != nullptr) {
      st.push((root));
      root = root->left;
    } else {
      if (st.empty())
        break;
      root = st.top();
      st.pop();
      std::cout << root->data << ' ';
      root = root->right;
    }
  }
}
int main() {
  int x = 1;
  Node *root = new Node(x);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  inorder(root);
}
