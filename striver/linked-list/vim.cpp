#include <cstddef>
#include <iostream>
#include <vector>

class Node {

public:
  int data;
  Node *next;

  Node(int data1, Node *next1) {
    this->data = data1;
    this->next = next1;
  }
  Node() {
    this->data = 0;
    this->next = nullptr;
  }
  Node(int data1) {
    this->data = data1;
    this->next = nullptr;
  }
};

Node *insertList(Node *head, std::vector<int> &v) {
  int n = v.size();
  Node *mover = head;
  for (int i = 1; i < n; i++) {
    Node *temp = new Node(v[i]);
    mover->next = temp;
    mover = temp;
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
// Node *deleteHead(Node *head) {
//   if (head == NULL)
//     return head;
//   Node *temp = head;
//   head = head->next;
//   delete temp;
//
//   return head;
// }

// Node *deleteTail(Node *head) {
//   if (head == NULL)
//     return NULL;
//   if (head->next == NULL) {
//     free(head);
//     return NULL;
//   }
//
//   Node *temp = head;
//
//   while (temp->next->next != NULL) {
//     temp = temp->next;
//   }
//   free(temp->next);
//   temp->next = nullptr;
//   return head;
// }
// Node *deleteElement(Node *head, int k) {
//   if (head == NULL)
//     return head;
//   if (k == 1) {
//     Node *temp = head;
//     head = head->next;
//     free(temp);
//     return head;
//   }
//   int ctr{0};
//   Node *temp = head;
//   Node *previous = NULL;
//
//   while (temp) {
//
//     ctr++;
// if (ctr == k - 1) {
//   Node *temp1 = temp->next;
//   temp->next = temp->next->next;
//   free(temp1);
//   return head;
// }
//     if (ctr == k) {
//       previous->next = previous->next->next;
//       free(temp);
//       break;
//     }
//     previous = temp;
//     temp = temp->next;
//   }
//   return head;
// }
//
// Node *deleteValue(Node *head, int k) {
//   if (head == NULL)
//     return head;
//   if (head->data == k) {
//     Node *temp = head;
//     head = head->next;
//     free(temp);
//     return head;
//   }
//   Node *temp = head;
//   Node *previous = NULL;
//   while (temp) {
//     if (temp->data == k) {
//       previous->next = previous->next->next;
//       free(temp);
//       break;
//     }
//     previous = temp;
//     temp = temp->next;
//   }
//   return head;
// }
//
// Node *insertHead(Node *head, int k) {
//   Node *temp = new Node(k, head);
//   // head = temp;
//   return temp;
// }
//
//
// Node *insertTail(Node *head, int k) {
//   if (head == NULL)
//     return new Node(k);
//   Node *temp = head;
//   Node *temp1 = new Node(k);
//   // Node **temp2 = &temp1;
//
//   while (temp) {
//     if (temp->next == nullptr) {
//       temp->next = temp1;
//       break;
//     }
//     temp = temp->next;
//   }
//   return head;
// }
// Node *insertPlace(Node *head, int k, int val) {
//   if (head == NULL) {
//     if (k == 1)
//       return new Node(val);
//   }
//   if (k == 1) {
//     Node *temp = new Node(val, head);
//     return temp;
//   }
//   Node *temp = head;
//   int ctr{0};
//   while (temp) {
//     ctr++;
//     if (ctr == k - 1) {
//       Node *temp1 = new Node(val, temp->next);
//       temp->next = temp1;
//       break;
//     }
//     temp = temp->next;
//   }
//   return head;
// }
Node *beforeValue(Node *head, int val, int k) {
  if (head == NULL) {
    return NULL;
  }
  if (head->data == k) {
    Node *temp = new Node(val, head);
    return temp;
  }
  Node *temp = head;
  while (temp->next) {
    if (temp->next->data == k) {
      Node *temp1 = new Node(val, temp->next);
      temp->next = temp1;
      break;
    }
    temp = temp->next;
  }
  return head;
}
int main(void) {
  std::vector<int> v = {1, 2, 3, 4, 5};
  Node *head = new Node(v[0]);
  insertList(head, v);
  // std::cout << head->data;

  // head = deleteHead(head);
  // std::cout << head->data;

  // deleteElement(head, 8);
  // deleteValue(head, 3);

  // head = insertHead(head, 0);
  //  insertTail(head, 6);
  // insertPlace(head, 2, 0);
  beforeValue(head, 100, 2);
  printList(head);
}
