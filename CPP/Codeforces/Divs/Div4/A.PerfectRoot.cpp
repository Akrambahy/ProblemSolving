#include <iostream>
#include <cmath>
using namespace std;

void PrintPerfectRoot(int n){
 for(int i=1;i<=n;i++){
cout<<pow(i,2)<<" ";
 }   
 cout<<endl;
}

int main(){
int t=0,n=0;
cin>>t;
while(t--){
cin>>n;
PrintPerfectRoot(n);
}   
}