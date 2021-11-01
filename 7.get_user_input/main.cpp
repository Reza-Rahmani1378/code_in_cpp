#include <cmath>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  string fullName;
  int age;
  std::cout << "Enter your full name: ";
  getline(cin, fullName);
  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cout << "You are " << fullName << " and you are " << age
            << " years old.";
  return 0;
}
