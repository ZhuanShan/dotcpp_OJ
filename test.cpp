#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    long long num;
    cin>>num;
    for(long long a=2;a<=num;a+2){
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
        cout<<"\n"<<a<<" its factors are";
        for(long long l=1;l<=a/2;l++){
            if(b[l]==1){
                printf("%lld ",l);
            }
        }
    }
}
    return 0;
}