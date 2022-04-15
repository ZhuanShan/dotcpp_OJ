#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int a,b,t;
    int na,nb;
    cin>>na>>nb;
    a=na;
    b=nb;
    if(b>a){
        t=a;
        a=b;
        b=t;
    }
    int min;
    int c;
    while(b){
        c=a%b;
        a=b;
        b=c;
    }
    int max;
    max=na*nb/a;
    cout<<a<<" "<<max;
    return 0;
}