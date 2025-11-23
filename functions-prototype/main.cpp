#include "math.h"
#include <iostream>

int main() {
  int x, y;
  std::cin >> x >> y;
  int result = add(x, y);
  std::cout << "Result is: " << result << std::endl;

  return 0;
}
