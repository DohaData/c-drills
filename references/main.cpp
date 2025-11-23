#include <iostream>

int main() {

  int x = 10;

  int &ref = x;

  x = 6;

  std::cout << "x: " << x << std::endl;

  std::cout << "ref: " << ref << std::endl;

  std::cout << "x address: " << &x << std::endl;

  std::cout << "ref address: " << &ref << std::endl;
}