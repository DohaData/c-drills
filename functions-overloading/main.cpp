#include <iostream>

int Add(int a, int b) { return a + b; }

double Add(double a, double b) { return a + b; }

int main() {

  int result = Add(3, 5);
  std::cout << "Suming ints " << result << std::endl;
  double floatResult = Add(3.1, 6.2);
  std::cout << "Suming doubles " << floatResult << std::endl;
  return 0;
}