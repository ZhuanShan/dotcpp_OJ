#include <stdio.h>
#include <iostream>
using namespace std;

void judgewan(long long a){
    int sum=1;
    long long j,b[a]={0};
    b[1]=1;
    for(long long i=2;i<=a/2;i++){
        if(a%i==0){
            if(b[i]!=1){
                b[i]=1;
                sum = sum+i;
            }
            j=a/i;
            if(i!=j&&b[j]==0){
                b[j]=1;
                sum = sum+j;
            }
        }
    }
    if(sum==a){
        cout<<a<<" its factors are ";
        for(long long l=1;l<=a/2;l++){
            if(b[l]==1){
                printf("%lld ",l);
            }
        }
        cout<<"\n";
    }
}
    

int main(){
    long long num;
    cin>>num;
    for(long long k=2;k<=num;k+=2){
        judgewan(k);
    }
    return 0;
}
    