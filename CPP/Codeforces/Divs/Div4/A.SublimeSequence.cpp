#include <iostream>
using namespace std;

int SumSublime(int x, int n)
{

    return (n % 2 == 0) ? 0 : x;
}

int main()
{
    int t, x, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> n;
        cout << SumSublime(x, n) << endl;
    }
}