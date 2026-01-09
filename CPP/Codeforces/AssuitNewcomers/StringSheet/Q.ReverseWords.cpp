#include <iostream>

using namespace std;

void ReverseWord(string &word, int stIndex, int enIndex)
{

    while (stIndex < enIndex)
    {
        swap(word[stIndex], word[enIndex]);
        stIndex++;
        enIndex--;
    }
}

string ReverseText(string S)
{

    int stIndex = 0;
    int enIndex = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == ' ')
        {
            ReverseWord(S, stIndex, i - 1);
            stIndex = i + 1;
        }
    }
    ReverseWord(S, stIndex, S.length() - 1);
    return S;
}

int main()
{
    string S;
    getline(cin, S);
    cout << ReverseText(S);
}