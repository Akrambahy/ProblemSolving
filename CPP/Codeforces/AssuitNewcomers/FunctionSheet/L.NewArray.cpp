#include <iostream>
#include <iomanip>

using namespace std;

void ReadArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }
}
void PrintArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void ConcatenationArray(int array1[], int array2[], int *cArray, int size)
{

    for (int i = 0; i < size; i++)
    {
        *(cArray + i) = *(array2 + i);
    }
    for (int i = size; i < size * 2; i++)
    {
        *(cArray + i) = *(array1 + (i - size));
    }
}

int main()
{

    int size;
    cin >> size;
    int array1[size];
    int array2[size];
    int cArray[size * 2];
    ReadArray(array1, size);
    ReadArray(array2, size);
    ConcatenationArray(array1, array2, cArray, size);
    PrintArray(cArray, size * 2);
}
