#include <iostream>
using namespace std;

int main() {
  int leg, head, chicken, dog;
  cout << "Enter head : ";
  cin >> head;
  cout << "Enter leg : ";
  cin >> leg;

  chicken = (2 * head - 0.5 * leg);
  dog = 4 - chicken;

  cout << "Chicken is : " << chicken << endl;
  cout << "Dog is : " << dog << endl;
  return 0;
}
