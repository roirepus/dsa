#include <iostream>
#include <vector>
int main() {
  std::vector<int> arr = {1, 2, 3, 5};
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 6) {
      std::cout << i;
      break;
    }
  }
}
