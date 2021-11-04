#include <iostream>
using namespace std;
class Book {
public:
  string title;
  string author;
  int pages;
};

int main(int argc, char *argv[]) {
  Book book;
  book.title = "useless toughts";
  book.author = "Jafar Mosafa";
  book.pages = 300;

  std::cout << "book title: " << book.title << std::endl;
  std::cout << "book author: " << book.author << std::endl;
  std::cout << "book pages: " << book.pages << std::endl;
  return 0;
}
