#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  bool a = true;
  bool b = false;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  if (a && b) {
    std::cout << "both a and b are true" << std::endl;
  } else if (a || b) {
    std::cout << "both a and b or one of them is true" << std::endl;
  } else {
    std::cout << "both a and b are flase" << std::endl;
  }
  return 0;
}
