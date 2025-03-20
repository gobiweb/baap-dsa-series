#include <iostream>
using namespace std;

int main() {
  int num = 100;
  float b = 5.5;

  // Implicit Type Casting
  float result = num + b; // result : 105.5
  cout << result << endl;

  // Explicit Type Casting
  float p = 3.14;
  int a = int(p);

  cout << a << endl;

  return 0;
}
