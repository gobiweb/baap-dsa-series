#include <iostream>
using namespace std;

int main() {
  float n1, n2, y1, y2;
  cout << "Enter first numerator : ";
  cin >> n1;
  cout << "Enter second numerator : ";
  cin >> n2;
  cout << "Enter first denominator : ";
  cin >> y1;
  cout << "Enter second denominator : ";
  cin >> y2;

  float sum = ((n1 * y2) + (n2 * y1)) / (y1 * y2);

  cout << "The sum of those 2 fractions is: " << sum << endl;

  return 0;
}
