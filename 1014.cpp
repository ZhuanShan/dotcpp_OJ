#include <stdio.h>
#include <iostream>
using namespace std;

long long jie(int a){               //return 是long型，定义也是long型
    long long sum=1;
    while(a!=0){
        sum= sum*a;
        a--;
    }
    return sum;
}

int main(){
    int n;
    long long tem;
    cin>>n;
    long long he=0;
    while(n!=0){
        tem=jie(n);
        he=tem+he;
        n--;
    }
    cout<<he;
    return 0;
}