#include <iostream>
using namespace std;
class Book {
public:
  string title;
  string author;
  int pages;
  Book() {
    title = "no title";
    author = "no author";
    pages = 0;
  }
  Book(string aTitle, string aAuthor, int aPages) {
    title = aTitle;
    author = aAuthor;
    pages = aPages;
  }
};

int main(int argc, char *argv[]) {
  Book book("useless toughts", "Jafar Mosafa", 300);
  std::cout << "book title: " << book.title << std::endl;
  std::cout << "book author: " << book.author << std::endl;
  std::cout << "book pages: " << book.pages << std::endl;

  Book book2;
  std::cout << "book title: " << book2.title << std::endl;
  std::cout << "book author: " << book2.author << std::endl;
  std::cout << "book pages: " << book2.pages << std::endl;
  return 0;
}
