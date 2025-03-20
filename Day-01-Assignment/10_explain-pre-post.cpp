// x++ => It's says first print then increment
// --x => It's says first incrment then print

#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter the number: ";
  cin >> num;

  cout << num++ << endl;
  cout << ++num << endl;

  return 0;
}
