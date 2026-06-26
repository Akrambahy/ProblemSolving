// Hard Compare
#include <bits/stdc++.h>
using namespace std;
# define l long long
//Given 4 numbers A,B,C and D. If AB > CD print "YES" otherwise, print "NO".
bool compare(l A,l B,l C,l D){
    return (B*log(A)>D*log(C));
}
int main(){
    l A,B,C,D;
    cin>>A>>B>>C>>D;
    compare(A,B,C,D) ? cout<<"YES": cout<<"NO";
}
