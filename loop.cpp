#include <iostream>

using namespace std;

// Vars
int num = 7;
int guess = 0;

int main() {
  while (guess != num) {
    cout << "Enter a number between 1 and 9: ";
    cin >> guess;

    if (guess < 1 || guess > 9) {
      cout << "You entered an invalid number!" << endl;
    } else if (guess == num) {
      cout << "You won! The correct number is " << num;
      return 0;
    } else {
      cout << "Wrong number!" << endl;
    }
  }
}