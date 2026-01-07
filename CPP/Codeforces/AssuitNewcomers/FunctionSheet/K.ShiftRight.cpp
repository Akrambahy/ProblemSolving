#include <iostream>
#include <iomanip>

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

void ShiftRightArray(int * array,int size){
int temp=*(array+(size-1));
for(int i=size-1;i>=1;i--){
   *(array+i)=*(array+(i-1));
}
*(array+0)=temp;

}



int main(){

int size,t;
cin>>size>>t;
int array[size];
ReadArray(array,size);
if(t>=size)t=(t%size);
while(t--)ShiftRightArray(array,size);
PrintArray(array,size);

}
