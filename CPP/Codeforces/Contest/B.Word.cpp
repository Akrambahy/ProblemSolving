#include <iostream>

using namespace std;

bool IsMoreLower(string S)
{
    int Lowers = 0;
    int Uppers = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == tolower(S[i]))
            Lowers++;
        else
            Uppers++;
    }
    return Lowers > Uppers;
}

string ToLower(string S)
{

    for (int i = 0; i < S.length(); i++)
    {
        S[i] = tolower(S[i]);
    }
    return S;
}
string ToUpper(string S)
{

    for (int i = 0; i < S.length(); i++)
    {
        S[i] = toupper(S[i]);
    }
    return S;
}

void Solve()
{

    string S;
    cin >> S;
    (IsMoreLower(S)) ? cout << ToLower(S) << endl : cout << ToUpper(S) << endl;
}

int main()
{
    Solve();
}