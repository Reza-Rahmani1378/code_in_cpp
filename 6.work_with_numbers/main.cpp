#include "iostream"
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
  std::cout << 3 + 4 << std::endl;
  std::cout << 10 / 2 << std::endl;
  std::cout << 6 - 2 << std::endl;
  std::cout << 4 * 4 << std::endl;
  std::cout << 24 % 3 << std::endl;

  int i = 14;
  std::cout << i << std::endl;
  i++;
  std::cout << i << std::endl;
  i += 12;
  std::cout << pow(2, 8) << std::endl;
  std::cout << sqrt(36) << std::endl;
  std::cout << round(23.553) << std::endl;
  std::cout << ceil(45.2) << std::endl;
  std::cout << floor(45.8) << std::endl;
  std::cout << fmax(15, 24) << std::endl;
  std::cout << fmin(15, 24) << std::endl;

  return 0;
}
