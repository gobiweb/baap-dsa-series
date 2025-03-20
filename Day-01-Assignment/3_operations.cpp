#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  int add = a + b;
  int sub = a - b;
  int multi = a * b;
  int div = a / b;

  cout << "Addition is : " << add << endl;
  cout << "Subtraction is : " << sub << endl;
  cout << "Multiplicaton is : " << multi << endl;
  cout << "Division is : " << div << endl;

  return 0;
}
