#include <iostream>

using namespace std;

// Vars
string name;

int main() {
  cout << "Please, enter your name: ";
  getline(cin, name);
  cout << "Your name is: " << name;
}