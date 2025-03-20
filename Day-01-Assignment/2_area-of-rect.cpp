/*
Tke length and bredth as input (both integers) and
calcualte the area of the reactangle.
/***/

#include <iostream>
using namespace std;

int main() {
  int length, breadth;
  cout << "Enter the length: ";
  cin >> length;
  cout << "Enter th breadth: ";
  cin >> breadth;

  int rect = length * breadth;

  cout << "Area of a rectangle is : " << rect << endl;

  return 0;
}
