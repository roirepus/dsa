#include <iostream>
#include <vector>

class Node {
public:
  int data;
  Node *prev;
  Node *next;

  Node(int x) {
    this->data = x;
    this->prev = nullptr;
    this->prev = nullptr;
  }
  Node(Node *prev, int x) {
    this->data = x;
    this->prev = prev;
    this->next = nullptr;
  }
  Node(Node *prev, int x, Node *next) {
    this->prev = prev;
    this->data = x;
    this->next = next;
  }
};
Node *insertList(std::vector<int> &v) {
  Node *head = new Node(v[0]);
  int n = v.size();
  Node *prev = head;
  for (int i = 1; i < n; i++) {
    Node *temp = new Node(prev, v[i]);
    prev->next = temp;
    prev = temp;
  }
  return head;
}
Node *reverseList(Node *head) {
  // Node *temp = head;
  // while (temp) {
  //   if (temp->prev == nullptr) {
  //     temp->prev = temp->next;
  //     temp->next = nullptr;
  //   }
  //   if (temp->next == nullptr) {
  //     temp->next = temp->prev;
  //     temp->prev = nullptr;
  //   } else {
  //     Node *front = temp->next;
  //     temp->next = temp->prev;
  //     temp->prev = front;
  //   }
  //
  //   temp = temp->prev;
  // }
  // return temp->prev;
  Node *prev = nullptr;
  Node *current = head;
  while (current) {
    prev = current->prev;
    current->prev = current->next;
    current->next = prev;
    current = current->prev;
  }
  return prev->prev;
}

void printList(Node *head) {
  Node *temp = head;
  while (temp) {
    std::cout << temp->data << ' ';
    temp = temp->next;
  }
  std::cout << '\n';
}
int main(void) {

  std::vector<int> v = {1, 2, 3, 4};
  Node *head = insertList(v);
  printList(head);
  printList(reverseList(head));
}
