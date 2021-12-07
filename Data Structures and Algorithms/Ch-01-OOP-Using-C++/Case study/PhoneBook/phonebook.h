#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>

class PhoneBook {
public:
  PhoneBook(int = 0, const std::string & = "", const std::string & = "",
            const std::string & = "");
  void setId(int);
  int getId() const;

  void setFirstName(const std::string &);
  std::string getFirstName() const;

  void setLastName(const std::string &);
  std::string getLastName() const;

  void setPhone(const std::string &);
  std::string getPhone() const;

  std::string toString() const;

private:
  int id;
  char firstName[10];
  char lastName[10];
  char phone[10];
};

#endif // !PHONEBOOK_H
