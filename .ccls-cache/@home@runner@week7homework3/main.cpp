#include <iostream>
#include <string>
using namespace std;

int main() {
  //make variables
  string str;
  int check = 0;
  //input
  cin>>str;
  //use one variable for the first character and another for last, to check if they are the same. Than increase the first and decrease the second.
  for(int i = 0; i<str.length(); i++){
    // for(int j = str.length(); j>=1; j-i){
    int j = str.length()-1-i;
      if(str[i]==str[j]){
        continue;
      }
      else if(str[i]!=str[j]){
        check = 1;
        break;
      }
    // }
  }
  if(check == 0){
    cout<<"yes";
  }
  else{
    cout<<"no";
  }
}