#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Please enter between (65 - 90) the number: ";
  cin >> num;

  char ascillLetter = char(num);

  cout << "It's corresponsding uppercase letter is: " << ascillLetter << endl;

  return 0;
}
