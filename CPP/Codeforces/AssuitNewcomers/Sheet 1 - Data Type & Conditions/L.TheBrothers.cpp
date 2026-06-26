// The Brothers
#include <bits/stdc++.h>
using namespace std;

bool AreBrothers(string S1,string S2){
    return S1==S2;
}

int main(){
string F1,F2,S1,S2;
cin>>F1>>S1>>F2>>S2;
if(AreBrothers(S1,S2)) cout <<"ARE Brothers";
else cout<<"NOT";
}
//ARE Brothers