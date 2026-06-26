// Sort Numbers
#include <bits/stdc++.h>
using namespace std;

void SortMax(int A , int B, int C){
   int temp;
if (A<B){
temp=A;
A=B;
B=temp;
}
if (A<C){
temp=A;
A=C;
C=temp;
}
if (C>B){
temp=C;
C=B;
B=temp;
}

//cout<<A<<endl<<B<<endl<<C<<endl<<endl;
cout<<C<<endl<<B<<endl<<A<<endl<<endl;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    SortMax(a,b,c);
    cout<<a<<endl<<b<<endl<<c<<endl;

}
