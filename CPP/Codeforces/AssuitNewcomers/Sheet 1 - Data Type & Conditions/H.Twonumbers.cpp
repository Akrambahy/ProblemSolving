// Two numbers
#include <bits/stdc++.h>
using namespace std;

void PrintFloor(float num1,float num2){
cout<<"floor "<<num1<<" / "<<num2<<" = "<<floor(num1/num2)<<endl;
}
void PrintCeil(float num1,float num2){
cout<<"ceil "<<num1<<" / "<<num2<<" = "<<ceil(num1/num2)<<endl;
}
void PrintRound(float num1,float num2){
cout<<"round "<<num1<<" / "<<num2<<" = "<<round(num1/num2)<<endl;
}

int main(){
float num1,num2;
cin>>num1>>num2;
PrintFloor(num1,num2);
PrintCeil(num1,num2);
PrintRound(num1,num2);
}
/*
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
*/