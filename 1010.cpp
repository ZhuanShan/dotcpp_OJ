#include <stdio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int lone(int a){
    int b1=a*0.1;
    return b1;
}
int ltwo(int a){
    int b1=lone(100000);
    int b2=b1+(a-100000)*0.075;;
    return b2;
}
int lfour(int a){
    int b2=ltwo(200000);
    int b3=b2+(a-200000)*0.05;
    return b3;
}
int lsix(int a){
    int b3=lfour(400000);
    int b4=b3+(a-400000)*0.03;
    return b4;
}
int lten(int a){
    int b4=lsix(600000);
    int b5=b4+(a-600000)*0.015;
    return b5;
}
int uten(int a){
    int b5=lten(1000000);
    int b6=b5+(a-1000000)*0.001;
    return b6;
}

int main(){
    int n,b;
    cin>>n;
    if(n<=100000)
        b=lone(n);
    else if(n<=200000)
        b= ltwo(n);
    else if(n<=400000)
        b= lfour(n);
    else if(n<=600000)
        b=lsix(n);
    else if(n<=1000000)
        b=lten(n);
    else
        b=uten(n);
    cout<<b;
    return 0;
}