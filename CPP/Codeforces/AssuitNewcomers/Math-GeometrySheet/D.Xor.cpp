#include <iostream>

using namespace std ;

long long Xor(long long A , long long B, long long Q)
{
if(Q==1 ) return A;
else if(Q==2 ) return B;
else if (Q%3==0)return A ^ B;
else if (Q%3==1)return A;
else if (Q%3==2)return B;
else return -1;
}

int main(){
long long A,B,Q;
cin>>A>>B>>Q;
cout<<Xor(A,B,Q)<<endl;

}