#include <iostream>
#include <algorithm>

using namespace std;

int CountEgypt(string S)
{

    int CountE = 0;
    int CountG = 0;
    int CountY = 0;
    int CountP = 0;
    int CountT = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (toupper(S[i]) == 'E')
        {
            CountE++;
        }
        else if (toupper(S[i]) == 'G')
        {
            CountG++;
        }
        else if (toupper(S[i]) == 'Y')
        {
            CountY++;
        }
        else if (toupper(S[i]) == 'P')
        {
            CountP++;
        }
        else if (toupper(S[i]) == 'T')

        {

            CountT++;
        }
    }

    return min({CountE, CountG, CountY, CountP, CountT});
}

int main()
{

    string S;
    getline(cin, S);
    cout << CountEgypt(S);
}