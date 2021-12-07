#include "phonebook.h"
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

enum Options { ADDNEW = 1, UPDATE, DELETE, SHOW, STOP };
const string fileName = "phonebook.dat";

PhoneBook findById(int id) {
  ifstream file(fileName, ios::binary);
  if (!file) {
    cerr << "Error. Cannot open file." << endl;
    exit(EXIT_FAILURE);
  }
  PhoneBook pb;
  while (file.read(reinterpret_cast<char *>(&pb), sizeof(PhoneBook))) {
    if (pb.getId() == id)
      break;
    pb.setId(0);
  }
  file.close();
  return pb;
}

void _create() {
  ofstream file(fileName, ios::out | ios::app | ios::binary);
  if (!file) {
    cerr << "Error. Cannot open file." << endl;
    exit(EXIT_FAILURE);
  }
  int id = 0;
  string fn, ln, ph;
  while (1) {
    std::cout << "Enter ID(1-100). Any other number to stop:";
    std::cin >> id;
    if (id < 1 || id > 100)
      break;
    PhoneBook pb;
    pb = findById(id);
    if (pb.getId() == id) {
      std::cout << "Record exists: " << pb.toString() << std::endl;
      continue;
    }
    std::cout << "Enter firstname, lastname, phone number\n?" << std::endl;
    std::cin >> setw(10) >> fn >> setw(10) >> ln >> setw(10) >> ph;
    pb.setId(id);
    pb.setFirstName(fn);
    pb.setLastName(ln);
    pb.setPhone(ph);
    file.write(reinterpret_cast<const char *>(&pb), sizeof(PhoneBook));
  }
  file.close();
}

void _update() {
  int id;
  std::cout << "Enter ID to modify: ";
  cin >> id;
  fstream file(fileName, ios::in | ios::out | ios::binary);
  if (!file) {
    cerr << "Error. Cannot open file." << endl;
    exit(EXIT_FAILURE);
  }
  PhoneBook pb;
  string phno;
  bool flag = false;
  while (file.read(reinterpret_cast<char *>(&pb), sizeof(PhoneBook))) {
    if (pb.getId() == id) {
      std::cout << pb.toString() << std::endl;
      std::cout << "Enter new phone number:";
      std::cin >> phno;
      pb.setPhone(phno);
      long pos = -1 * sizeof(PhoneBook);
      file.seekp(pos, ios::cur);
      file.write(reinterpret_cast<const char *>(&pb), sizeof(PhoneBook));
      flag = true;
      break;
    }
  }
  if (flag == false)
    std::cout << "No record found for modification." << std::endl;
  else
    std::cout << "Record Modified successfully." << std::endl;
  file.close();
}

void _delete() {
  int id;
  std::cout << "Enter existing ID:";
  std::cin >> id;
  PhoneBook pb;
  fstream file(fileName, ios::in | ios::out | ios::binary);
  if (!file) {
    cerr << "Error. Cannot open file." << endl;
    exit(EXIT_FAILURE);
  }
  bool flag = false;
  while (file.read(reinterpret_cast<char *>(&pb), sizeof(PhoneBook))) {
    if (pb.getId() == id) {
      pb.setId(0);
      pb.setLastName("");
      pb.setLastName("");
      pb.setPhone("");
      long pos = -1 * sizeof(PhoneBook);
      file.seekp(pos, ios::cur);
      file.write(reinterpret_cast<const char *>(&pb), sizeof(PhoneBook));
      flag = true;
      break;
    }
  }
  if (flag == true)
    std::cout << "Record successfully deleted ." << std::endl;
  else
    std::cout << "Record not found." << std::endl;
  file.close();
}

void _print() {
  int count = 0;
  ifstream file(fileName, ios::binary);
  if (!file) {
    cerr << "Error. Cannot open file." << endl;
    exit(EXIT_FAILURE);
  }
  std::cout << "------------------------------------------------------------"
            << std::endl;
  std::cout << left << setw(3) << "ID" << setw(10) << "FName" << setw(10)
            << "LName" << setw(10) << "Phone" << std::endl;
  std::cout << "------------------------------------------------------------"
            << std::endl;
  PhoneBook pb;
  while (file.read(reinterpret_cast<char *>(&pb), sizeof(PhoneBook))) {

    if (pb.getId() != 0) {
      count++;
      std::cout << left << setw(3) << pb.getId() << setw(10)
                << pb.getFirstName() << setw(10) << pb.getLastName() << setw(10)
                << pb.getPhone() << std::endl;
    }
  }
  std::cout << "------------------------------------------------------------"
            << std::endl;
  std::cout << "Total: " << count << " Record(s)" << std::endl;
  std::cout << "------------------------------------------------------------"
            << std::endl;
  file.close();
}
int main(int argc, char *argv[]) {
  while (1) {
    std::cout << "\nEnter your choice" << std::endl
              << "1 - Add new record" << std::endl
              << "2 - Update an existing record" << std::endl
              << "3 - Delete a record" << std::endl
              << "4 - Print all records" << std::endl
              << "5 - Quit\n?";
    int opt;
    std::cin >> opt;
    switch (opt) {
    case ADDNEW:
      _create();
      break;
    case UPDATE:
      _update();
      break;
    case DELETE:
      _delete();
      break;
    case SHOW:
      _print();
      break;
    case STOP:
      exit(EXIT_SUCCESS);
    default:
      cerr << "Invalid Options! Tray againg." << endl;
      break;
    }
  }
  return 0;
}
