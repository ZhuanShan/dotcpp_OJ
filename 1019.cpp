#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    double m,n;
    cin>>m>>n;
    double sum;
    double fantan;
    fantan=m;
    sum=m;
    if(n==1){
        fantan=m/2;
        sum=m;
    }
    else{
        for(int i=1;i<n;i++){
            fantan = fantan/2;
            sum = sum + 2*fantan;
        }
        fantan = fantan/2;
    }
    printf("%.2f %.2f",fantan,sum);
    return 0;
}