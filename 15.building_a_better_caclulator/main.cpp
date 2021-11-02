#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int num1, num2;
  int result;
  char op;
  std::cout << "Eter first number: " << std::endl;
  std::cin >> num1;
  std::cout << "Eter operator: " << std::endl;
  std::cin >> op;
  std::cout << "Eter second number: " << std::endl;
  std::cin >> num2;

  if (op == '+') {
    result = num1 + num2;
  } else if (op == '-') {
    result = num1 - num2;
  } else if (op == '*') {
    result = num1 * num2;
  } else if (op == '/') {
    result = num1 / num2;
  } else {
    std::cout << "Invalid operator" << std::endl;
  }
  std::cout << result << std::endl;
  return 0;
}
