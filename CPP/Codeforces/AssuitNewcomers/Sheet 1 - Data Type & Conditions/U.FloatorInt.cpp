// Float or Int
#include <bits/stdc++.h>
using namespace std;

struct Number{
    int value ;
    float fraction;
    string GetState (){
        if(fraction==0) return "int";
        else return "float";
    } ;

};
Number GetNumberState(float number){
Number num;
num.value=number;
num.fraction= number - int(number);
return num;
}

int main(){
float num;
cin>>num;
Number NumberState=GetNumberState(num);
//float 534 0.958
if(NumberState.fraction>0)cout<<NumberState.GetState()<<" "<<NumberState.value<<" "<<NumberState.fraction;
else cout<<NumberState.GetState()<<" "<<NumberState.value;

}
