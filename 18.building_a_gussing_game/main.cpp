#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int secretNumber = 5;
  int guess;
  int guessCount = 0;
  int guessLimit = 5;
  bool outOfGuess = false;

  while (secretNumber != guess && !outOfGuess) {
    if (guessCount <= guessLimit) {
      std::cout << "Enter a guess: ";
      std::cin >> guess;
      guessCount++;
    } else {
      outOfGuess = true;
    }
  }
  if (outOfGuess) {
    std::cout << "You lose." << std::endl;
  } else {
    std::cout << "You win." << std::endl;
  }

  return 0;
}
