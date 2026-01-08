#include <iostream>

using namespace std;

void SpeedCode()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


int main()
{

    SpeedCode();
    int size;
    int freq[26]={0};
    cin>>size;
    char c;
for(int i=0;i<size;i++){
   cin>>c;
 freq[c-'a']++;
}
for(int i=0;i<26;i++){
 for(int j=0;j<freq[i];j++){
   cout<<char(i+'a');
}  
}
    
}