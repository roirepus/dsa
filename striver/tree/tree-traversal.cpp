#include <bits/stdc++.h>
#include <iostream>

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
  if (root == nullptr) {
    return;
  }
  inorder(root->left);
  std::cout << root->data << ' ';
  inorder(root->right);
}
void preorder(Node *root) {
  if (root == nullptr) {
    return;
  }
  std::cout << root->data << ' ';
  preorder(root->left);
  preorder(root->right);
}
void postorder(Node *root) {
  if (root == nullptr) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  std::cout << root->data << ' ';
}
int main(void) {

  int x = 1;
  Node *root = new Node(x);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  // inorder(root);
  // preorder(root);
  postorder(root);
}
