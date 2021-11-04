#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int a[] = {12, 2, 3, 4, 5, 6, 2};
  std::cout << a[4] << std::endl;
  a[4] = 123;
  std::cout << a[4] << std::endl;
  int b[10];
  b[0] = 4;
  std::cout << b[0] << std::endl;
  return 0;
}
