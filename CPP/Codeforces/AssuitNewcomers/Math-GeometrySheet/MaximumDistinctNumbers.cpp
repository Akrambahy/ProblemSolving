
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

long long GetMaximumDistinctNumbers(long long n)
{
   
    return floor((sqrt(1 + 8*n) - 1) / 2);
}

int main()
{
    long long n;
    cin >> n;

    cout << GetMaximumDistinctNumbers(n);
}

