#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int array[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << array[i][j] << "\t";
    }
    cout << endl;
  }
  return 0;
}
