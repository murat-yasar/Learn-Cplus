#include <iostream>
#include <cmath>

using namespace std;

// Vars
int x = 10;
int y = 5;
double result;

int main() {
  result = max(x, y);
  cout << "max: " << result << endl;

  result = min(x, y);
  cout << "min: " << result << endl;

  result = sqrt(x);
  cout << "squareroot: " << result << endl;

  result = round(result);
  cout << "round: " << result << endl;

  result = log(result);
  cout << "log: " << result << endl;

}