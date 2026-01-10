#include <iostream>

using namespace std;
// http://www.{word}.{word}/{word}/{word}?username={word}&pwd={word}&profile={word}&role={word}&key={word}
string GetUsername(string URL)
{
    int counter = 0;
    int stIndex = 0;
    int length = 0;

    for (int i = 0; i < URL.length(); i++)
    {
        if (URL[i] == '=')
        {
            stIndex = i;
            counter++;
        }
        else if (URL[i] == '&' && counter == 1)
        {
            length = i - stIndex;
            break;
        }
    }
    return URL.substr(stIndex + 1, length - 1);
}

string GetPWD(string URL)
{
    int Counter = 0;
    int stIndex = 0;
    int length = 0;

    for (int i = 0; i < URL.length(); i++)
    {
        if (URL[i] == '=')
        {
            stIndex = i;
            Counter++;
        }
        else if (URL[i] == '&' && Counter == 2)
        {
            length = i - stIndex;
            break;
        }
    }
    return URL.substr(stIndex + 1, length - 1);
}

string GetProfile(string URL)
{
    int Counter = 0;
    int stIndex = 0;
    int length = 0;

    for (int i = 0; i < URL.length(); i++)
    {
        if (URL[i] == '=')
        {
            stIndex = i;
            Counter++;
        }
        else if (URL[i] == '&' && Counter == 3)
        {
            length = i - stIndex;
            break;
        }
    }
    return URL.substr(stIndex + 1, length - 1);
}

string GetRole(string URL)
{
    int Counter = 0;
    int stIndex = 0;
    int length = 0;

    for (int i = 0; i < URL.length(); i++)
    {
        if (URL[i] == '=')
        {
            stIndex = i;
            Counter++;
        }
        else if (URL[i] == '&' && Counter == 4)
        {
            length = i - stIndex;
            break;
        }
    }
    return URL.substr(stIndex + 1, length - 1);
}

string GetKey(string URL)
{
    int Counter = 0;
    int stIndex = 0;
    int length = 0;

    for (int i = 0; i < URL.length(); i++)
    {
        if (URL[i] == '=')
        {
            stIndex = i;
            Counter++;
        }
        else if (URL[i] == '&' && Counter == 5)
        {
            length = i - stIndex;
            break;
        }
    }
    return URL.substr(stIndex + 1, length - 1);
}

void PrintUserInfo(string URL)
{
    /*username: test
    pwd: test
    profile: developer
    role: ELITE
    key: manager
    */
    cout << "username: " << GetUsername(URL) << endl;
    cout << "pwd: " << GetPWD(URL) << endl;
    cout << "profile: " << GetProfile(URL) << endl;
    cout << "role: " << GetRole(URL) << endl;
    cout << "key: " << GetKey(URL) << endl;
}

int main()
{
    string URL;
    cin >> URL;
    PrintUserInfo(URL);
}