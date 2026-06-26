#include <bits/stdc++.h>
using namespace std;


long long SumBetween(long long n)
{
    return (n*(n+1))/2;
}
int main(){
long long n;
cin>>n;
cout<<SumBetween(n);
}


/*
sum 1 n = n*(n+1)/2
sum 1 to n = n*(n+1)/2
sum 1 to n = n*(n+1)/2


*/