#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 6;

  int z1 = (x == y);
  cout << z1 << endl;
  int z2 = (x != y);
  cout << z2 << endl;
  int z3 = (x < y);
  cout << z3 << endl;
  int z4 = (x > y);
  cout << z4 << endl;

  return 0;
}
