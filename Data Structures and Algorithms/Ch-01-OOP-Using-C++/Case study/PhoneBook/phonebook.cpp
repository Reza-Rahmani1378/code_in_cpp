#include "phonebook.h"
using namespace std;

PhoneBook ::PhoneBook(int _id, const std::string &_firstName,
                      const std::string &_lastName, const std::string &_phone)
    : id(_id) {
  setFirstName(_firstName);
  setLastName(_lastName);
  setPhone(_phone);
}

void PhoneBook::setId(int _id) { id = _id; }
int PhoneBook::getId() const { return id; }

void PhoneBook::setFirstName(const string &_firstName) {
  size_t len = _firstName.size();
  len = (len < 10 ? len : 9);
  _firstName.copy(firstName, len);
  firstName[len] = '\0';
}

string PhoneBook::getFirstName() const { return firstName; }

void PhoneBook::setLastName(const string &_lastName) {
  size_t len = _lastName.size();
  len = (len < 10 ? len : 9);
  _lastName.copy(lastName, len);
  lastName[len] = '\0';
}

string PhoneBook::getLastName() const { return lastName; }

void PhoneBook::setPhone(const string &_phone) {
  size_t len = _phone.size();
  len = (len < 10 ? len : 9);
  _phone.copy(phone, len);
  phone[len] = '\0';
}

string PhoneBook::getPhone() const { return phone; }

string PhoneBook::toString() const {
  return "\nID: " + to_string(id) + " [ " + string(firstName) + " , " +
         string(lastName) + " , " + string(phone) + " ]";
}
