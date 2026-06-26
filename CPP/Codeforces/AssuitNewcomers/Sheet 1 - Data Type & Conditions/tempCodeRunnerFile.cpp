// The Last 2 Digits
#include <bits/stdc++.h>
#define l long long
using namespace std;
l GetLast2Mul(l A,l B,l C ,l D){
    l Mul=A*B*C*D;
    l Las2=(Mul%10);
    Mul/=10;
    l Las1=Mul%10;
    return Las1*10 + Las2 ;
}

int main(){
l A ,B, C , D;
cin>>A>>B>>C>>D;
cout<<GetLast2Mul(A,B,C,D);
}
