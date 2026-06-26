// Interval
#include <bits/stdc++.h>
using namespace std;


// Out of Intervals
//Interval [0,25]
//[0,25], (25,50], (50,75], (75,100]

 string GetInterval(float num){
    if(num<0)return "Out of Intervals";
    else if(num<=25.0) return "Interval [0,25]";
    else if(num<=50.0) return "Interval (25,50]";
    else if(num<=75.0) return "Interval (50,75]";
    else if(num<=100.0) return "Interval (75,100]";
    else return "Out of Intervals";
 }
int main(){
float num;
cin>>num;
cout<<GetInterval(num);
}
