#include <iostream>

int main() {
  int *pointer_x = new int{};
  std::cout << "define a pointer " << pointer_x << std::endl;

  int y = 10;
  std::cout << "y address " << &y << std::endl;

  *pointer_x = 5;

  std::cout << "dereference pointer " << *pointer_x << std::endl;

  std::cout << "pointer address " << &pointer_x << std::endl;

  int *x_null_pointer = nullptr; // null pointer cannot be dereferenced
  std::cout << "x_null_pointer " << x_null_pointer << std::endl;
  if (x_null_pointer != nullptr) {
    std::cout << "then its dereferenced value " << *x_null_pointer << std::endl;
  } else {
    std::cout << "pointer is null, cannot dereference" << std::endl;
  }
  return 0;
}