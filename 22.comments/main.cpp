#include <iostream>
using namespace std;
/*
the following program is exactcly a copy of
  the last exercise with some comments to
  clarify different sections.
*/

int main(int argc, char *argv[]) {
  // this is a two dimentional array
  int array[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  // here the program going to print the array elements
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << array[i][j] << "\t";
    }
    cout << endl;
    //    std::cout << "it won't print" << std::endl;
  }
  return 0;
}
