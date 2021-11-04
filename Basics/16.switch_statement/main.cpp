#include <iostream>
using namespace std;
string getDayName(int dayNum) {
  string datName;
  switch (dayNum) {
  case 0:
    datName = "Sunday";
    break;
  case 1:
    datName = "Monday";
    break;
  case 2:
    datName = "Tuesday";
    break;
  case 3:
    datName = "Wedenesday";
    break;
  case 4:
    datName = "Thursday";
    break;
  case 5:
    datName = "Friday";
    break;
  case 6:
    datName = "Saturday";
    break;
  default:
    datName = "Invalid day number.";
  }

  return datName;
}
int main(int argc, char *argv[]) {
  int a = 2;
  int b = 6;
  int c = 9;
  std::cout << "a: " << a << " Day: " << getDayName(a) << std::endl;
  std::cout << "b: " << b << " Day: " << getDayName(b) << std::endl;
  std::cout << "c: " << c << " Day: " << getDayName(c) << std::endl;
  return 0;
}
