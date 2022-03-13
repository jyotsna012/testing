#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x << endl;
  int *A = new int[x];
  A[0] = 1;
  A[1] = 2;
  A[2] = 3;
  A[3] = 4;
  A[4] = 5;
  cout << "this is A1: " << A[1] << endl;
  delete[] A;
  return 0;
}
