#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    for(int i=100;i<=999;i++){
        int no=i;
        c=i%10;
        b=(i/10)%10;
        a=i/100;
        int he = a*a*a + b*b*b + c*c*c;
        if(he==no){
            cout<<no<<endl;
        }
    }
    return 0;
}