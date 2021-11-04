#include <iostream>
using namespace std;
class Chef {
public:
  void makeSalad() { std::cout << "Chef makes salad" << std::endl; }
  void makeChiken() { std::cout << "Chef makes chiken" << std::endl; }
  void makeSpecialDish() { std::cout << "Chef makes bbq ribs" << std::endl; }
};
class ItalianChef : public Chef {

public:
  void makepasta() { std::cout << "Chef makes pasta" << std::endl; }
  void makeSpecialDish() { std::cout << "Chef makes lazania" << std::endl; }
};
int main(int argc, char *argv[]) {

  Chef chef;
  chef.makeSalad();
  chef.makeSpecialDish();

  ItalianChef italianChef;
  italianChef.makepasta();
  italianChef.makeSpecialDish();
  return 0;
}
