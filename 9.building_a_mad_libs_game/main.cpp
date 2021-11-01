#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  string color, pluralName, celebrityName;
  std::cout << "Enter a color: " << std::endl;
  getline(cin, color);
  std::cout << "Enter a plural name: " << std::endl;
  getline(cin, pluralName);
  std::cout << "Enter a celebrity name: " << std::endl;
  getline(cin, celebrityName);

  std::cout << "Roeses are " << color << std::endl;
  std::cout << pluralName << " are blue" << std::endl;
  std::cout << "I love " << celebrityName << std::endl;

  return 0;
}
