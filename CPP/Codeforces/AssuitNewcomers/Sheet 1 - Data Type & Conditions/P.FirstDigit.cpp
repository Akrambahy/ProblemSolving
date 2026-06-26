// First Digit
#include <bits/stdc++.h>
using namespace std;

int GetFirstDigit(int Digit){

    while (Digit/10!=0)
    {
      Digit=Digit/10;
    }
    return Digit;
    
}

void EvenOrOdd(int Digit){
    if(GetFirstDigit(Digit)%2==0) cout<<"EVEN";
    else cout<<"ODD";
}

int main(){
int Digit;
cin>>Digit;
EvenOrOdd(Digit);
}
