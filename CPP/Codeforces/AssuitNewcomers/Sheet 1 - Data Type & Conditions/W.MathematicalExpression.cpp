// Comparison
#include <bits/stdc++.h>
using namespace std;

bool IsRightComparison(int A, char S , int B,int ans)
{
    switch (S)
    {
    case '+':
        return(A+B==ans);
        break;
    case '-':
        return(A-B==ans);
        break;
    case '*':
        return(A*B==ans);
        break;
    
    default:
    return 0;
        break;
    }
}
int RightComparison(int A, char S , int B)
{
    switch (S)
    {
    case '+':
        return(A+B);
        break;
    case '-':
        return(A-B);
        break;
    case '*':
        return(A*B);
        break;
    
    default:
    return 0;
        break;
    }
}

int main(){
int A,B,ans;
char S,eq;
cin>>A>>S>>B>>eq>>ans;
(IsRightComparison(A,S,B,ans)) ? cout<<"Yes" : cout<<RightComparison(A,S,B);
}
