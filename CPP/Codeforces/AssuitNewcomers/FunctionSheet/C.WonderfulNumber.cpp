#include <iostream>

using namespace std;

string intToStringBin(int n)
{

    if (n == 0)
        return "0";
    else
    {
        string stBinary = "";
        while (n > 0)
        {
            stBinary = char(n % 2 + '0') + stBinary;
            n /= 2;
        }
        return stBinary;
    }
}

bool IsPalindrom(string S)
{

    int left = 0;
    int right = S.length() - 1;

    while (left < right)
    {

        if (S[left] != S[right])
            return false;
        left++;
        right--;
    }
    return true;
}

bool IsWonderful(int Number)
{
    string binNumber = intToStringBin(Number);
    if (IsPalindrom(binNumber) == true && (Number % 2 == 1))
        return true;
    else
        return false;
}

int main()
{
    int number;
    cin >> number;
    (IsWonderful(number)) ? cout << "YES" << endl : cout << "NO" << endl;
}