#include <iostream>
using namespace std;

int main() {
  int a = 3, b = 5, c;
  c = a++ + ++b;
  cout << a << " " <<  b << " " << c;
  // answer a = 4, b = 6, c = 9

  return 0;
}
