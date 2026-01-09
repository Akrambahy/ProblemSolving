#include <iostream>

using namespace std;
// spaces and ('!', '.', '?' and ',') symbols.
bool IsLetter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool IsEndMark(char c)
{
    return (c == ' ' || c == '.' || c == '?' || c == ',' || c == '!');
}

int CountWord(string S)
{
    int Counter = 0;
    for (int i = 1; i < S.length(); i++)
    {
        if ((IsEndMark(S[i])) && (IsLetter(S[i - 1])))
        {
            Counter++;
        }
        else if ((i == S.length() - 1) && (IsLetter(S[i])))
            Counter++;
    }
    return Counter;
}

int main()
{
    string S;
    getline(cin, S);
    cout << CountWord(S);
}