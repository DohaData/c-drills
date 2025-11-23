#include <iostream>

void Swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

void Print(int *ptr) {
  if (ptr != nullptr)
    std::cout << *ptr << std::endl;
  else
    std::cout << "cant print anything, you are giving me a null pointer"
              << std::endl;
}

int main() {
  int x = 5;
  Print(&x);
  Print(nullptr);
  int a = 5, b = 10;
  Swap(a, b);
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  return 0;
}