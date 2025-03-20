#include <iostream>
using namespace std;

int main() {
  int a = 4;
  int b = 5;
  a++, b--;
  // pre increment ++a , post increment a++
  cout << ++a << " " << b--;

  return 0;
}
