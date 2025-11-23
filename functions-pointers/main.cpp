#include <iostream>

void Print(int count, char ch) {
  for (int i = 0; i < count; i++)
    std::cout << ch << std::endl;
}

void EndMessage() { std::cout << "End of Program" << std::endl; }

int main() {
  //   Print(5, '#');
  void (*pfn)(int, char) = &Print; // & is optionnal
  (*pfn)(8, '@');
  pfn(5, '*');
  atexit(EndMessage); // sometimes internal functions use function pointers
  return 0;
}