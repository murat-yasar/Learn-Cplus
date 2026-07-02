#include <iostream>

using namespace std;

// Vars
int age;

int main() {
  cout << "Enter your age: ";
  cin >> age;

  if(age<0){
    cout << "Your age (" << age << ") is NOT VALID!";
  } else if(age<18){
    cout << "Your age is " << age << ". You are NOT ALLOWED to enter!";
  } else {
    cout << "Your age is " << age << ". You CAN ENTER!";
  }
}