#include <iostream>
#include <string>
using namespace std;

int main() {
  string navn;
  cout << "Skriv ditt navn: ";
  getline (cin, navn);
  cout << "Navnet ditt er: " << navn;
  return 0;
}