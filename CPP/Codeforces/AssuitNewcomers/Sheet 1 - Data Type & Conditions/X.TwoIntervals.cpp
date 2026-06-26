// Two Intervals
#include <bits/stdc++.h>
using namespace std;

void TowIntervals(int S1,int E1,int S2 , int E2){
if(S2>E1 || S1>E2)  cout<<-1;
else cout<<max(S1,S2)<<" "<<min(E1,E2);
}

int main(){
int S1, E1, S2 ,  E2;
cin>>S1>>E1>>S2>>E2;
TowIntervals(S1,E1,S2,E2);
}
