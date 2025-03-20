#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x1, x2, y1, y2;
  cout << "Enter X1 coordinate : ";
  cin >> x1;
  cout << "Enter X2 coordinate : ";
  cin >> x2;
  cout << "Enter y1 coordinate : ";
  cin >> y1;
  cout << "Enter y1 coordinate : ";
  cin >> y2;

  int distance;
  int xCordinate = (x2 - x1) * (x2 - x1);
  int yCordinate = (y2 - y1) * (y2 - y1);
  distance = sqrt(xCordinate + yCordinate);

  cout << "The distance is: " << distance << endl;

  return 0;
}
