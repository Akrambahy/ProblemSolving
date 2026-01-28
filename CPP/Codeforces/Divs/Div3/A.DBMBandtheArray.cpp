#include <iostream>
using namespace std;

void ReadArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }
}

int SumArray(int array[], int size)
{
    int Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum += array[i];
    }
    return Sum;
}

void Solve(int n, int s, int x)
{
    int arr[n];
    ReadArray(arr, n);
    int Sum = SumArray(arr, n);

    while (Sum < s)
    {
        Sum += x;
    }
    if (Sum == s)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int t, n, s, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> x;
        Solve(n, s, x);
    }
}