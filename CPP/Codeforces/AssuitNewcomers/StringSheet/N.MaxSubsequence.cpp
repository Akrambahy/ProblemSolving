#include <iostream>

using namespace std;

int CountMaxSubsec(string S1, int size)
{
    int Counter = 1;
    for (int i = 0; i < size - 1; i++)
    {

        if (S1[i] != S1[i + 1])
            Counter++;
    }

    return min(Counter, size);
}

int main()
{

    int size;
    string S1;
    cin >> size;
    cin >> S1;

    cout << CountMaxSubsec(S1, size) << endl;
}