#include <iostream>
using namespace std;

int main() {
  int a = 5, b = 10, c = 15;
  bool result = (a < 5 && b < c) || c == 10;
  cout << result;

  // 0 => false

  return 0;
}
