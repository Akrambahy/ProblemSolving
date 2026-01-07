#include <iostream>

using namespace std;

void SpeedCode()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void SortString(string S1, int size)
{
    int array[26] = {0};

    for (int i = 0; i < size; i++)
    {
        array[S1[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < array[i]; j++)
        {
            cout << char(i + 'a');
        }
    }
}

int main()
{

    SpeedCode();
    int size;
    string S1;
    cin >> size;
    cin >> S1;
    SortString(S1,size);
}