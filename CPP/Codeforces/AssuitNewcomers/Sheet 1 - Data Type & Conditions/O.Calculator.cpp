// Calculator
#include <bits/stdc++.h>
using namespace std;

int Calc(int A,char op , int B){
    switch (op)
    {
    case '+':
       return A+B;
        break;
    case '-':
       return A-B;
        break;
    case '/':
       return A/B;
        break;
    case '*':
       return A*B;
        break;
    default:
        break;
    }
}

int main(){
int A,B;
char op;
cin>>A>>op>>B;
cout<<Calc(A,op,B);
}
//A+B, A−B, A∗B and A/B.*/