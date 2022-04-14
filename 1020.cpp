#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    int sum=1;
    cin>>n;
    for(int i=1;i<n;i++){
        sum = sum+1;
        sum= sum*2;
    }
    cout<<sum;
    return 0;
}