/*
 Write a program that takes two integers
 as input and prints thier sum.
/***/

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  int sum = a + b;
  cout << "Sum is : " << sum << endl;

  return 0;
}
