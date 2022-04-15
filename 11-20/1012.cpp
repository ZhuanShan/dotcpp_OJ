#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char chuan[200];
    gets(chuan);
    int a,b,c,d,n;
    a=b=c=d=0;
    n=strlen(chuan);
    for(int i=0;i<n;i++){
        if(chuan[i]>= 'A' && chuan[i]<='Z' || chuan[i]>= 'a' && chuan[i] <= 'z')
            a++;
        else if(chuan[i]>= '0' && chuan[i]<= '9')
            b++;
        else if(chuan[i]==32)
            c++;
        else    
            d++;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}