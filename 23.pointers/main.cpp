#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  // actual variables
  int i = 100;
  double d = 34.5;
  string s = "hi";
  // pointers
  // note: you should use same data tpye for your pointers
  int *pI = &i;
  double *pD = &d;
  string *pS = &s;

  std::cout << "variables:" << std::endl;
  std::cout << "i: " << i << std::endl;
  std::cout << "d: " << d << std::endl;
  std::cout << "s: " << s << std::endl;
  std::cout << "pointers:" << std::endl;
  std::cout << "pI: " << pI << std::endl;
  std::cout << "pD: " << pD << std::endl;
  std::cout << "pS: " << pS << std::endl;
  std::cout << "dereferencing pointers:" << std::endl;
  std::cout << "*pI: " << *pI << std::endl;
  std::cout << "*pD: " << *pD << std::endl;
  std::cout << "*pS: " << *pS << std::endl;
  std::cout << "reference/dereferencing chain:" << std::endl;
  std::cout << "&*pI: " << &*pI << std::endl;
  std::cout << "&*pD: " << &*pD << std::endl;
  std::cout << "&*pS: " << &*pS << std::endl;

  return 0;
}
