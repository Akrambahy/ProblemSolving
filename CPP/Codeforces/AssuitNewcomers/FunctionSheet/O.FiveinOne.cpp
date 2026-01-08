#include <iostream>

using namespace std;

/*The maximum number : 8
The minimum number : 1
The number of prime numbers : 2
The number of palindrome numbers : 4
The number that has the maximum number of divisors : 8
*/

void ReadArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }
}

int GetMaxNumber(int array[], int size)
{
    int tempMax = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > tempMax)
            tempMax = array[i];
    }
    return tempMax;
}
int GetMinNumber(int array[], int size)
{
    int tempMin = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < tempMin)
            tempMin = array[i];
    }
    return tempMin;
}

bool IsPrime(int number)
{
    if (number == 1)
        return false;

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int CountPrimes(int array[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (IsPrime(array[i]))
            counter++;
    }
    return counter;
}
bool IsPalindrome(int number)
{
    int original = number;
    int reversed = 0;

    while (number > 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return (original == reversed);
}

int CountPalindrome(int array[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (IsPalindrome(array[i]))
            counter++;
    }
    return counter;
}

int CountDivisors(int number)
{
    int counter = 1;
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
            counter++;
    }
    return counter;
}

int GetMaxDivisor(int array[], int size)
{
    int maxDivisor = array[0];
    for (int i = 1; i < size; i++)
    {
        if (CountDivisors(array[i]) > CountDivisors(maxDivisor))
            maxDivisor = array[i];
        else if (CountDivisors(array[i]) == CountDivisors(maxDivisor))
            if (array[i] > maxDivisor)
                maxDivisor = array[i];
    }
    return maxDivisor;
}

void PrintFiveProblems(int array[], int size)
{

    cout << "The maximum number : " << GetMaxNumber(array, size) << endl;
    cout << "The minimum number : " << GetMinNumber(array, size) << endl;
    cout << "The number of prime numbers : " << CountPrimes(array, size) << endl;
    cout << "The number of palindrome numbers : " << CountPalindrome(array, size) << endl;
    cout << "The number that has the maximum number of divisors : " << GetMaxDivisor(array, size) << endl;
}

int main()
{
    int size;
    cin >> size;
    int array[size];
    ReadArray(array, size);
    PrintFiveProblems(array, size);
}