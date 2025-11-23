#include <iostream>

int main() {
  for (int i = 0; i < 5; i++) {
    std::cout << "i = " << i << std::endl;
  }

  int arr[]{1, 2, 3, 4, 5};

  for (auto &x : arr) {
    std::cout << " x = " << x << std::endl;
    std::cout << " Im changing values, deal with it ";
    x = 1;
  }

  for (auto &x : arr) {
    std::cout << " Hahahah tricked you! ";
    std::cout << " x = " << x << std::endl;
  }

  return 0;
}