#include <bits/stdc++.h>
#include <iostream>
class Node {
public:
  int data;
  Node *next;

  Node(int x, Node *next) {
    this->data = x;
    this->next = next;
  }
  Node(int x) {
    this->data = x;
    this->next = nullptr;
  }
};

// int length(Node *head) {
//   Node *temp = head;
//
//   int l{0};
//   while (temp) {
//     // std::cout << temp->data << " ";
//     temp = temp->next;
//     l++;
//   }
//   return l;
// }
// int checkIfPresent(Node *head, int value) {
//   Node *temp = head;
//   while (temp) {
//     if (temp->data == value) {
//
//       return 1;
//       break;
//     }
//     temp = temp->next;
//   }
//   return 0;
// }
Node *deleteNode(Node *head /*int value*/) {
  if (head == NULL)
    return head;

  Node *temp = head;
  head = head->next;
  delete temp;
  return head;
}

int main() {
  std::vector<int> arr = {2, 1, 3, 8};
  int n = arr.size();

  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < n; i++) {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  // std::cout << head->data;
  // std::cout << "length is: " << length(head) << '\n';
  // std::cout << "is 4 there? " << checkIfPresent(head, 4);
  head = deleteNode(head);
  std::cout << head->data;
}
