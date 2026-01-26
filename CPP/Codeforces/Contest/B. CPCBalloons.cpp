#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define endl '\n'
string ProblemSolved = "";

bool IsFirstSolve(char Problem, string &Solved)
{
    for (int i = 0; i < Solved.length(); i++)
    {
        if (Solved[i] == Problem)
        {
            return false;
            break;
        }
    }
    Solved += Problem;
    return true;
}
int ICPCBalloons(){

    
}

void Solve()
{
}
void SpeedCode()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void CheckTestCases()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        Solve();
    }
}
int main()
{
    SpeedCode();

    Solve();

    return 0;
}
