//超时算法
// #include <stdio.h>
// int cow(int n){
//     if(n<=1)
//         return 1;
//     else if(n==2)
//         return 2;
//     else if(n==3)
//         return 3;
//     else if(n==4)
//         return 4;
//     else {
//         return cow(n-1)+cow(n-3);
//     }
// }

// int main(){
//     int i;
//     while(scanf("%d",&i)!=EOF){
//             printf("%d\n",cow(i));
//     }
//     return 0;
// }



#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
    int cow[56]={0,1,2,3,4};
    for(int i=4;i<55;i++){
        cow[i]=cow[i-1]+cow[i-3];
    }
    int n;
    while(cin>>n && n!=0){         //cin n
        cout<<cow[n]<<endl;
    }
    return 0;
}