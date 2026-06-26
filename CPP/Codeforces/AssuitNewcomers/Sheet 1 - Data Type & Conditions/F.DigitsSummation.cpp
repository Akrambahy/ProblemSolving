#include <bits/stdc++.h>
using namespace std;

long long SumLastDigit(long long n , long long m){
return (n%10 + m%10);    
}

int main(){
long long n,m;
cin>>n>>m;
cout<<SumLastDigit(n,m);
}
