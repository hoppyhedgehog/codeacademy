#include<string>
using namespace std;

void asterisk(string word, string &txt, int i) {
  
  for (int k = 0; k < word.size(); ++k) {
  
    txt[i+k] = '*';
      
  }
  
}

void bleep(string word, string &txt) {
    
  for (int i = 0; i < txt.size(); ++i) {
        
    int match = 0;
        
    for (int j = 0; j < word.size(); ++j) {
    
      if (txt[i+j] == word[j]) {
        
        ++match;
          
      }
    
    }
        
    if (match == word.size()) {
            
      asterisk(word, txt, i);
        
    }
      
  }
    
}