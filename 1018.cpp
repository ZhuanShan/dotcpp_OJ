#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    float sum=0;
    double a=1.00,b=2.00;
    int tem;
    for(int i=1;i<=n;i++){
        double j;
        j=b/a;
        sum= sum+j;
        tem=a;
        a=b;
        b=tem+b;
    }
    printf("%.2f",sum);
    return 0;
}