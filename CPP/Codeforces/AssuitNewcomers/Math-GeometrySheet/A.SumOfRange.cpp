#include <iostream>

using namespace std;

long long SumBetween(long long A, long long B)
{
    if (A > B)
    {
        long long temp = A;
        A = B;
        B = temp;
    }

    return (((B - A + 1) * (A + B)) / 2);
}
long long SumEven(long long A, long long B)
{
    if (A > B)
    {
        long long temp = A;
        A = B;
        B = temp;
    }

    long long start = (A % 2 == 0) ? A : A + 1;
    long long end = (B % 2 == 0) ? B : B - 1;
    long long n = ((end - start) / 2) + 1;
    return (n * (start + end) / 2);
}
long long SumOdd(long long A, long long B)
{
    return SumBetween(A, B) - SumEven(A, B);
}

int main()
{
    long long A, B;
    cin >> A >> B;
    cout << SumBetween(A, B) << endl
         << SumEven(A, B) << endl
         << SumOdd(A, B) << endl;
}