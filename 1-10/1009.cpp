#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
  char chuan[6];
  gets(chuan);
  int len = strlen(chuan);
  cout<<len<<endl;
  for(int i=0;i<5;i++){
      cout<<chuan[i];
      if(i<len-1){
          
          printf(" ");
      }
  }
  cout<<"\n";
  for(int i=len-1;i>=0;i--){
      cout<<chuan[i];
  }
    return 0;
}