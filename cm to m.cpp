#include <iostream>
using namespace std;

int main() {
  int cm;
  cout << "Enter Your amount in cm: ";
  cin >> cm;
  int result = cm / 100;
  cout << "Your amount is: " << result << " meter";
  return 0;
}
