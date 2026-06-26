// Coordinates of a Point
#include <bits/stdc++.h>
using namespace std;

string GetQuarter(float X,float Y){

    if(X>0&&Y>0) return "Q1";
    else if (X<0 && Y>0) return "Q2";
    else if (X<0 && Y<0) return "Q3";
    else if (X>0 && Y<0) return "Q4";
    else if (X!=0 && Y==0) return "Eixo X";
    else if (X==0 && Y!=0) return "Eixo Y";
    else if(X==0&&Y==0) return "Origem";
    else return"Error On Point";

}
int main(){
float X,Y;
cin>>X>>Y;
cout<<GetQuarter(X,Y);
}
