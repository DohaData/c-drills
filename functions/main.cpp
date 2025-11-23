#include <iostream>

int add(int x, int y) { return x + y; }

int main() {
  int x, y;
  std::cin >> x >> y;
  int result = add(x, y);
  std::cout << "Result is: " << result << std::endl;

  return 0;
}
