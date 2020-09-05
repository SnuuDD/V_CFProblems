#include <iostream>
#include <string>
using namespace std;

int main(){
  bool hello[5]  = {0};
  // [ h, e, l, l, o]
  // [ false, false, false, false, false]

  string word;
  cin >> word;

  bool l_flag = 0;

  for(uint16_t i = 0; i < word.size(); ++i){
    if(word[i] == 'h'){
      hello[0] = true;
    }
    else if(word[i] == 'e' && hello[0]){
      hello[1] = true;
    }
    else if(word[i] == 'l' && hello[1]){
      if(l_flag){
        hello[3] = true;
      }
      else {
        hello[2] = true;
        l_flag = true;
      }
    }
    else if(word[i] == 'o' && hello[3] && hello[2]){
      hello[4] = true; 
    }
  }

  if(hello[0] && hello[1] && hello[2] && hello[3] && hello[4]){
    cout<<"YES";
  }
  else {
    cout<<"NO";;
  }

  return 0;
}
