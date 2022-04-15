#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    double a;
    double cha;
    double x2,x1;
    cin>>a;
    cha=a;
    x1=a/2;
    while(cha>0.1){
        x2=(x1+a/x1)/2;
        cha=x1-x2;
        x1=x2;
    }
    printf("%.3f",x2);
    return 0;
}