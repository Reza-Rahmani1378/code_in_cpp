#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int index = 1;
  std::cout << "index is: " << index << std::endl;
  std::cout << "while loop:" << std::endl;
  while (index <= 6) {
    std::cout << "now index is: " << index << std::endl;
    index++;
  }
  std::cout << std::endl;
  std::cout << "index is: " << index << std::endl;
  std::cout << "do while loop:" << std::endl;
  do {
    std::cout << "now index is: " << index << std::endl;
    index++;
  } while (index <= 6);
  return 0;
}
