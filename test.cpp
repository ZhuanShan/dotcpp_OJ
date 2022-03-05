#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    double k,c;
    cin>>c;
    double hc=0;
    for(k=1;k<=c;k++){
        hc=hc+(1/k);
         printf("%.2f\n",hc);
    }
    printf("%.2f",hc);
    return 0;
}