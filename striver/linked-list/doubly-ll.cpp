#include <cstddef>
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
void printList(Node *head) {
  Node *temp = head;
  while (temp) {
    std::cout << temp->data << ' ';
    temp = temp->next;
  }
}
Node *deleteHead(Node *head) {
  if (head == nullptr)
    return nullptr;
  if (head->next == nullptr) {
    free(head);
    return nullptr;
  }
  // Node *temp = head->next;
  // temp->next->prev = nullptr;
  // free(head);

  // return temp;
  Node *prev = head;
  head = head->next;
  head->prev = nullptr;
  prev->next = nullptr;
  delete prev;
  return head;
}
Node *deleteTail(Node *head) {
  if (head == nullptr || head->next == nullptr) {
    delete head;
    return nullptr;
  }
  Node *temp = head;
  while (temp) {
    if (temp->next == nullptr) {
      temp->prev->next = nullptr;
      temp->prev = nullptr;
      delete temp;
    }
    temp = temp->next;
  }
  return head;
}
Node *deletePosition(Node *head, int k) {

  if (head == NULL || k == 1) {
  }

  int ctr{0};
  Node *temp = head;
  while (temp) {
    ctr++;
    if (ctr == k) {
      break;
    }
    temp = temp->next;
  }
  Node *back = temp->prev;
  Node *front = temp->next;
  if (back == nullptr && front == nullptr) {
    delete temp;
    return nullptr;
  } else if (back == nullptr) {
    return deleteHead(head);
  } else if (front == nullptr) {
    return deleteTail(head);
  } else {
    temp->prev->next = temp->next;
    temp->prev = nullptr;
    temp->next = nullptr;
    delete temp;
  }
  return head;
}
int main() {

  std::vector<int> v = {1, 2, 3, 4};
  Node *head = insertList(v);
  // head = deleteHead(head);
  //  deleteTail(head);
  deletePosition(head, 9);
  printList(head);
}
