#include <iostream>
using namespace std;

class Studnet {
public:
  string name;
  string major;
  double gpa;
  Studnet(string name, string major, double gpa) {
    this->name = name;
    this->major = major;
    this->gpa = gpa;
  }
  bool hasHonor() {
    if (gpa >= 3.5) {
      return true;
    }
    return false;
  }
};
int main(int argc, char *argv[]) {

  Studnet studnet1("Ali Asadnia", "Business Analytics", 3.8);
  Studnet studnet2("MohammadReza GoliBooshehri", "MBA", 3.4);

  std::cout << studnet1.hasHonor() << std::endl;
  std::cout << studnet2.hasHonor() << std::endl;

  return 0;
}
