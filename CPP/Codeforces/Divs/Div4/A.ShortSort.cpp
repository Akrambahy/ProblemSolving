#include <iostream>
using namespace std;

bool IsCanSort(string S){
return (S=="abc"||S=="acb"||S=="bac"||S=="cba") ;   
}

/*6
abc
acb
bac
bca
cab
cba

YES
YES
YES
NO
NO
YES
*/

int main(){
int t;
string S;
cin>>t;   
while(t--){
 cin>>S;
 (IsCanSort(S))  ? cout<<"YES"<<endl: cout<<"NO"<<endl;
}

}