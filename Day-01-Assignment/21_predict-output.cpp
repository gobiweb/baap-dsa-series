#include <iostream>
using namespace std;

int main() {
  int a = 6, b = 3;
  a += b *= 2;

  cout << a << " " << b << endl;

  //  a => 12, b => 6
  return 0;
}
