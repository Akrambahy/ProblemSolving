#include <iostream>
#include <iomanip>

using namespace std;

void ReadArray(float *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }
}

float CalculateAverage(float array[], int size)
{
    float sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum / size;
}

int main()
{

    int size;
    cin >> size;
    float array[size];
    ReadArray(array, size);
    float average = CalculateAverage(array, size);
    cout << fixed << setprecision(6) << average;
}
