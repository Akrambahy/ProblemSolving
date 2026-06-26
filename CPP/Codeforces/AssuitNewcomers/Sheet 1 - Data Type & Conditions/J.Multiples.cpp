// Multiples
#include <bits/stdc++.h>
using namespace std;

bool IsMultiples(int A, int B)
{
    if(A>=B) return A%B==0;
    else return B%A==0;
}

int main(){
  int A,B;
  cin>>A>>B;  
    if(IsMultiples(A,B)) cout<<"Multiples"; 
    else cout<<"No Multiples"; 
}
//Multiples
