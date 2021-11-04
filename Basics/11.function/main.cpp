#include <iostream>
using namespace std;

void sayHi(string name, int age);

int main(int argc, char *argv[]) {
  sayHi("mohammad reza", 27);
  sayHi("raha", 31);
  sayHi("saied", 35);
  return 0;
}

void sayHi(string name, int age) {
  std::cout << "Hi " << name << " you are " << age << " years old."
            << std::endl;
}
