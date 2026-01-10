#include <iostream>
#include <string>

using namespace std;

string EncryptByKey(string word, string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/")
{
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char kayChar;
    string EncWord = "";
    for (int i = 0; i < word.length(); i++)
    {
        kayChar = key[original.find(word[i])];
        EncWord += kayChar;
    }

    return EncWord;
}
string DecryptByKey(string word, string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/")
{
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char kayChar;
    string DecWord = "";
    for (int i = 0; i < word.length(); i++)
    {
        kayChar = original[key.find(word[i])];
        DecWord += kayChar;
    }

    return DecWord;
}

int main()
{
    int type;
    string S;
    cin >> type >> S;

    if (type == 1)
        cout << EncryptByKey(S);
    else
        cout << DecryptByKey(S);
}