#include <iostream>
using namespace std;

double cube(double num) {
  // double result = num * num * num;
  // return result;
  return num * num * num;
}

int main(int argc, char *argv[]) {
  double answer = cube(3.0);
  std::cout << answer << std::endl;
  std::cout << cube(5.0) << std::endl;
  return 0;
}
