#include <iostream>
#include <cmath>

using namespace std;
/*Print in one line the total number of chicken
wings that he will eat and the price
 he pays for the most expensive chicken wing.*/
bool IsPrime(int number)
{

    if (number <= 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(number); i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int CalculateTotalWings(int L, int R)
{
    int Wings = 0;
    for (int i = L; i <= R; i++)
    {
        if (IsPrime(i))
            Wings += i;
    }
    return Wings;
}

int CalculateMostExpensiveWing(int L, int R)
{

    int Price = 0;
    for (int i = L; i <= R; i++)
    {
        if (IsPrime(i))
            Price += 1;
    }
    return Price;
}

void EatChickenWings(int L, int R)
{
    cout << CalculateTotalWings(L, R) << " " << CalculateMostExpensiveWing(L, R) << endl;
}

void Solve()
{
    int L, R;
    cin >> L >> R;
    EatChickenWings(L, R);
}

int main()
{
    Solve();
}