#include <iostream>

using namespace std;

string WordReplaced(string S)
{
    while (S.find("EGYPT") != string::npos)
    {
        S.replace(S.find("EGYPT"), 5, " ");
    }
    return S;
}
int main()
{
    string S;
    cin >> S;
    cout << WordReplaced(S);
}