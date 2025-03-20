#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter the number: ";
  cin >> num;

  int sum = (num * (num + 1) * (2 * num + 1)) / 6;

  cout << "Sum of N (naturals) numbers square is: " << sum << endl;

  return 0;
}
