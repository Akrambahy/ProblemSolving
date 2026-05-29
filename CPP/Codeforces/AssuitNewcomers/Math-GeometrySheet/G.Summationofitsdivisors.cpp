#include <iostream>
#include <cmath>

using namespace std;

int GetSummationDivisor(long long N){
int Sum=1;
for(long long i =2 ; i * i<=N;i++){
if(N%i==0) Sum+=i;
}
return Sum;
}

int main (){
 long long N;
 cin>>N;
cout<<GetSummationDivisor(N);
}