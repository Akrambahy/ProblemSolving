#include <iostream>
using namespace std;
int GetMinIndex(int array[], int size)
{

    int minValue = array[0];
    int minIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] < minValue)
        {
            minValue = array[i];
            minIndex = i;
        }
    }
    return minIndex;
}
void ReadArray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int GetMaxProduct(int array[], int size)
{
    array[GetMinIndex(array, size)]++;
    int product = array[0];
    for (int i = 1; i < size; i++)
    {
        product *= array[i];
    }
    return product;
}

int main()
{
    int t;
    cin >> t;
    int size;
    while (t--)
    {
        int size;
        cin >> size;
        int array[size];
        ReadArray(array, size);
        cout << GetMaxProduct(array, size) << endl;
    }
}