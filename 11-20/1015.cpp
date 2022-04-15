#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double ha=0,hb=0,hc=0,hh=0;
    double i,j,k;
    for(i=0;i<=a;i++){
        ha=ha+i;
    }
    for(j=0;j<=b;j++){
        hb=hb+j*j;
    }
    for(k=1;k<=c;k++){
        hc=hc+(1.0/k);
    }
    hh = ha+hb+hc;
    printf("%.2f",hh);
    return 0;
}