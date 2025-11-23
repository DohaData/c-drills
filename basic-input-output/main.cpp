#include <iostream>
#include <string>

int main() {
  std::cout << "Hello world" << std::endl << 45 << " " << 8.2f << std::endl;
  int age;
  std::string name;
  std::cout << "Tell me your age: ";
  std::cin >> age;
  std::cin.ignore();
  std::cout << "Tell me your name: ";
  std::getline(std::cin, name);
  std::cout << "Your name is " << name << std::endl;
  return 0;
}