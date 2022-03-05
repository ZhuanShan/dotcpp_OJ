#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n,t=0;
    int sn=0;
    cin>>n;
    for(int i=0;i<n;i++){
        t= t*10;
        t=t+2;
        sn=sn+t;
    }
    cout<<sn;
    return 0;
}