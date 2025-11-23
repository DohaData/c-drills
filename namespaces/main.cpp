#include <iostream>

namespace Avg {
float Calculate(float a, float b) { return (a + b) / 2; }
} // namespace Avg
namespace Basic {
float Calculate(float a, float b) { return a + b; }
} // namespace Basic

namespace Sort {
void Quicksort() {}

void Insertionsort() {}

void Mergesort() {}

namespace Comparision {
void Less() {}

void Great() {}
} // namespace Comparision
} // namespace Sort
int main() {

  Avg::Calculate(3.9f, 8.2f);
  Sort::Comparision::Less();
  return 0;
}
