#include <iostream>
#include <cmath>
using namespace std;
long long GetMaxValue(int array[], int size)
{

    long long maxValue = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] >maxValue)
        {
            maxValue = array[i];
        }
    }
    return maxValue;
}

bool IsPerfectRoot(int number){
 float sroot= sqrt(number);
 float croot= cbrt(number); 

 return((sroot==int(sroot))||(croot==int(croot)));
}


void PrintPerfectRoot(int number){
while(number--){
for(int i=1;i<=300;i++){
 if(IsPerfectRoot(i)) cout<<i<<" ";   
}
}
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n=0;
       cin>>n;
       PrintPerfectRoot(n);
       cout<<endl;
    }
}