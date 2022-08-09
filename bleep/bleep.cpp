#include <iostream>
#include <string>
#include "functions.hpp"
using namespace std;

int main() {
  string word="broccoli";
  string to="*";
  string txt="broccoli broccoli I love broccoli, we're choppin broccoli! we're choppin broccoli!";
    bleep(word, txt);
  
  for (int i = 0; i < txt.size(); i++) {
    cout << txt[i];
   
  }
  
  cout << "\n";
  
}