#include <bits/stdc++.h>
#include <cmath>
#define Ay ios_base::sync_with_stdio(0);
#define Hbd cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

bool IsOfPower2(ll number){
if(number==0)return false;

return ((number&(number-1))==0);
}


void solve(){
ll number;
cin>>number;
(IsOfPower2(number))? cout<<"YES"<<endl:cout<<"NO"<<endl;

}

int main(){
Ay Hbd;

solve();
}