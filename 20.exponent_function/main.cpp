#include <iostream>
using namespace std;
int pow(int base, int pow) {
  int result = 1;
  for (int i = 0; i < pow; i++) {
    result *= base;
  }
  return result;
}
int main(int argc, char *argv[]) {
  std::cout << "2 ^3 = " << pow(2, 3) << std::endl;
  std::cout << "4 ^4 = " << pow(4, 4) << std::endl;
  return 0;
}
