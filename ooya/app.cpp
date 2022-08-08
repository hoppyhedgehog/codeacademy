#include <iostream>
#include "profile.hpp"
using namespace std;
int main() {

  
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("RC Cars");
  sam.add_hobby("Fishing");
  cout << sam.view_profile();
  Profile tom("Tom Thumb", 20, "Boston", "USA", "he/him");
  tom.add_hobby("PC Gaming");
  tom.add_hobby("playing rec sports like bowling and kickball");
  cout << tom.view_profile();


}