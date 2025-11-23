#include <iostream>

inline int Square(int x) {
  return x * x;
} // we dont see the call to the function internally
// modern compiler can inline not inlined functions

int main() {
  int val = 5;
  int result = Square(val + 1);
  std::cout << result << std::endl;
  return 0;
}