#include <iostream>

int main() {

  int arr[]{1, 2, 3, 4, 5};

  int *beg = std::begin(arr);
  int *end = std::end(arr);

  while (beg != end) {
    std::cout << *beg << " ";
    beg++;
    if (beg == end) {
      std::cout << std::endl;
    }
  }
  return 0;
}