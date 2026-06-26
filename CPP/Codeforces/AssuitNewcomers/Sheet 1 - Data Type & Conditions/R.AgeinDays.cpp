// Age in Days
#include <bits/stdc++.h>
using namespace std;
struct Age{
    int years=0;
    int months=0;
    int days=0;
};

Age GetAge(int days){
    Age curentAge;
    curentAge.years=days/365;
    curentAge.months=(days-(curentAge.years*365))/30;
    curentAge.days=days-((curentAge.years*365)+(curentAge.months*30));
    return curentAge;
}
int main(){
int days;
cin>>days;
Age Age=GetAge(days);
cout<<Age.years<<" years\n";
cout<<Age.months<<" months\n";
cout<<Age.days<<" days\n";
}
/*1 years
1 months
5 days*/