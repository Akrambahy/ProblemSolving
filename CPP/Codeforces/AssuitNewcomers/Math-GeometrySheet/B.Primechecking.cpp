#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(long long number)
{

    if (number < 2)
        return false;
     if(number ==2) return true;
     if(number%2==0) return false;
    else
    {

        for (long long i = 3; i *i <= (number) ; i+=2)
        {

            if ((number % i == 0) && (i != number))
                return false;
        }
    }

    return true;
}

void Solve()
{

    long long number;
    cin >> number;
    (IsPrime(number)) ? cout << "YES" << endl : cout << "NO" << endl;
}

signed main()
{
    Solve();
}