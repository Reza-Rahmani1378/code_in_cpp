#include <iostream>
using namespace std;
class Movie {
private:
  int rating;

public:
  string title;
  string author;
  Movie(string title, string author, int rating) {
    this->title = title;
    this->author = author;
    setRating(rating);
  }

  void setRating(int rating) {
    if (rating == 1 || rating == 2 || rating == 3 || rating == 4 ||
        rating == 5) {
      this->rating = rating;
    } else {
      this->rating = 0;
    }
  }
  int getRating() { return rating; }
};
int main(int argc, char *argv[]) {

  Movie marmolak("marmolak", "tabrizi", 5);

  std::cout << "title: " << marmolak.title << std::endl;
  std::cout << "author: " << marmolak.author << std::endl;
  std::cout << "rating: " << marmolak.getRating() << std::endl;

  return 0;
}
