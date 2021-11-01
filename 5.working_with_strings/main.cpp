#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  string s = "Mohammad Reza";
  std::cout << "This is the first line." << std::endl;
  std::cout << "This is the second line.\n";
  std::cout << "This is the third line.";
  std::cout << s << std::endl;
  std::cout << s.length() << std::endl;
  std::cout << s[5] << std::endl;
  s[5] = 'Q';
  std::cout << s << std::endl;
  std::cout << s.find("Reza", 0) << std::endl;
  std::cout << s.substr(3, 4) << std::endl;
  string sub = s.substr(2, 5);
  std::cout << sub << std::endl;
  return 0;
}
