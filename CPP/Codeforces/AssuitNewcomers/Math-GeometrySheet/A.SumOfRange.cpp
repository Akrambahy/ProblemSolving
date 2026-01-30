#include <iostream>

using namespace std;

long long sumBetween(long long A, long long B)
{
       
    return abs((B*(B+1)/2) -(A*(A+1)/2)+A);
}
long long sumEven(long long A, long long B)
{
    long long a = (A % 2 == 0) ? min(A,B) : min(A,B) + 1;
    long long b = (B % 2 == 0) ? max(A,B) : max(A,B) - 1;



    long long n = (b - a) / 2 + 1;
    return abs(n * (a + b) / 2);
}
long long sumOdd(long long A, long long B)
{
    long long a = (A % 2 == 1) ?min(A,B) : min(A,B) + 1;
    long long b = (B % 2 == 1) ?  max(A,B) : max(A,B) - 1;


    long long n = (b - a) / 2 + 1;
    return n * (a + b) / 2;
}

int main()
{
long long L,R;
cin>>L>>R;
cout<<sumBetween(L,R)<<endl;
cout<<sumEven(L,R)<<endl;
cout<<sumOdd(L,R)<<endl;
}