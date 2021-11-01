#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int a, b;
  std::cout << "Enter firts number: ";
  std::cin >> a;
  std::cout << "Enter second number: ";
  std::cin >> b;
  std::cout << a << " + " << b << " = " << a + b << std::endl;
  std::cout << a << " - " << b << " = " << a - b << std::endl;
  std::cout << a << " * " << b << " = " << a * b << std::endl;
  std::cout << a << " / " << b << " = " << a / b << std::endl;
  std::cout << a << " mod " << b << " = " << a % b << std::endl;
  return 0;
}
