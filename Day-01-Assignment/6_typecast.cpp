#include <iostream>
using namespace std;

int main() {
  float num;
  cout << "Enter the number (in float or decimal): ";
  cin >> num;

  int convertedToNum = int(num);

  cout << "The floating value is: " << num << endl;
  cout << "Converted to integer value is: " << convertedToNum << endl;

  return 0;
}
