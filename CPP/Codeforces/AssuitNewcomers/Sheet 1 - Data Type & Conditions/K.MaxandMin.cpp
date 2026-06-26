// Max and Min
#include <bits/stdc++.h>
using namespace std;
int Max(int A,int B, int C){
    if(A>=B&&A>=C) return A;
     else if(B>=A && B>=C) return B;
      else return C;
}
int Min(int A,int B, int C){
    if(A<=B && A<=C) return A;
     else if(B<=A && B<=C) return B;
      else return C;
}


int main(){
int A,B,C;
cin>>A>>B>>C;
cout<<Min(A,B,C)<<" "<<Max(A,B,C);
}
