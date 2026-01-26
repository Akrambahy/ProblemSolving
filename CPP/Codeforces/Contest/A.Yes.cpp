#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define endl '\n'

bool IsYes(string S){
return (tolower(S[0])=='y'&&tolower(S[1])=='e'&&tolower(S[2])=='s');
};

void Solve()
{
string S;
cin>>S;
(IsYes(S)) ? cout<<"Yes"<<endl:cout<<"No"<<endl;
}
void SpeedCode()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void CheckTestCases(){

int t = 1;
    cin >> t;   
  while (t--) {
        Solve ();
    }
}
int main()
{
    SpeedCode();

    CheckTestCases();

    return 0;
}
