#include <iostream>

using namespace std;

void MaxSplit(string S)
{
    string maxSplit[505];
    int p = 0;
    int LCounter = 0;
    int RCounter = 0;
    string current = "";

    for (int i = 0; i < S.length(); i++)
    {

        if (S[i] == 'L')
        {
            current += "L";
            LCounter++;
        }
        else if (S[i] == 'R')
        {
            current += "R";
            RCounter++;
        }
        if (LCounter == RCounter)
        {
            maxSplit[p] = current;
            p++;
            current = "";
        }
    }

    cout << p << endl;

    for (int i = 0; i < p; i++)
    {
        cout << maxSplit[i] << endl;
    }
}

int main()
{

    string S;
    cin >> S;
    MaxSplit(S);
}