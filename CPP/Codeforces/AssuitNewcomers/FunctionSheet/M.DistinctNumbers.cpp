#include <iostream>
#include <algorithm>

using namespace std;

void ReadArray(int * array,int size){
for(int i=0;i<size;i++){
    cin>>*(array+i);
}
}
void PrintArray(int array[],int size){
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
}

int CalculateDistinct(int  array[],int size){

int Counter=0;
sort(array,array+size);
for(int i=0;i<size;i++){
if(array[i]!=array[i+1]) Counter++;
}

return Counter;
}



int main(){

int size;
cin>>size;
int array[size];
ReadArray(array,size);
cout<<CalculateDistinct(array,size);

}
