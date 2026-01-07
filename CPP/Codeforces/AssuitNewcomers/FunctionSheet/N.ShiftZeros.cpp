#include <iostream>
#include <algorithm>

using namespace std;

void ReadArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }
}

void PrintArrayAfterShiftZeros(int array[], int size)
{

    int Counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
            Counter++;
        else
            cout << array[i] << " ";
    }
    while (Counter--)
    {
        cout << 0 << " ";
    }
    cout << endl;
}

int main()
{

    int size;
    cin >> size;
    int array[size];
    ReadArray(array, size);
    PrintArrayAfterShiftZeros(array, size);
}
