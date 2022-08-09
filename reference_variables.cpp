#include <iostream>
using namespace std;
int main() {
  
  int soda = 99;
  int &pop = soda;
  pop++;
  cout<< soda << endl;
  cout << pop << endl;
  
}