// Comparison
#include <bits/stdc++.h>
using namespace std;

bool IsRightComparison(int A, char S , int B)
{
    switch (S)
    {
    case '>':
        return(A>B);
        break;
    case '<':
        return(A<B);
        break;
    case '=':
        return(A==B);
        break;
    
    default:
    return 0;
        break;
    }
}
int main(){
int A,B;
char S;
cin>>A>>S>>B;
(IsRightComparison(A,S,B)) ? cout<<"Right" : cout<<"Wrong";
}
