#include <iostream>
using namespace std;

int main() {
  int principle, time, rate;
  cout << "Enter the principle: ";
  cin >> principle;
  cout << "Enter the time: ";
  cin >> time;
  cout << "Enter the rate: ";
  cin >> rate;

  float simpleInterest = (principle * time * rate) / 100;

  cout << "Simple interest is: " << simpleInterest << endl;

  return 0;
}
