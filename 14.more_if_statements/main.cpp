#include <iostream>
using namespace std;
int get2max(int num1, int num2) {
  if (num1 >= num2) {
    return num1;
  } else {
    return num2;
  }
}
int get3max(int num1, int num2, int num3) {
  if (num1 >= num2 && num1 >= num3) {
    return num1;
  } else if (num2 >= num1 && num2 >= num3) {
    return num2;
  } else {
    return num3;
  }
}
int main(int argc, char *argv[]) {
  int a = 14;
  int b = 35;
  int c = 200;
  std::cout << "a: " << a << "\nb: " << b << "\nc: " << c << std::endl;
  std::cout << "max(a,b): " << get2max(a, b) << std::endl;
  std::cout << "max(a,b,c): " << get3max(a, b, c) << std::endl;
  return 0;
}
