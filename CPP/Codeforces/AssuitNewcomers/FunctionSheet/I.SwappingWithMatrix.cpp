#include <iostream>
#include <algorithm>

using namespace std;


void PrintSwappingMatrix(int size , int x,int y){
int array[size][size];

for (int i = 0; i < size ; i++)
    {
         for (int j = 0; j < size; j++)
    {
       cin>> array[i][j];
    }
    }
for (int i = 0; i < size; i++)
    {
       swap(array[x-1][i],array[y-1][i]);
    }
for (int i = 0; i < size; i++)
    {
       swap(array[i][x-1],array[i][y-1]);
    }

    for (int i = 0; i < size ; i++)
    {
         for (int j = 0; j < size; j++)
    {
        cout << array[i][j] << " ";
    } cout<<endl;

    }
}



int main()
{

int size ,  x, y;
cin >> size>>x>>y;
PrintSwappingMatrix(size,x,y);

}
