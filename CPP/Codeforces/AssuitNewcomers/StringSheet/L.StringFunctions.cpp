#include <iostream>
#include <string>
#include <algorithm>

#define endl '\n'
using namespace std;



/* pop_back : remove the last character in the string.
front : print the first character in the string.
back : print the last character in the string.
sort l r : where (1≤l,r≤|S|)
sort all characters of S from l to r
.
reverse l r : where (1≤l,r≤|S|)
reverse all characters of S from l to r
.
print pos : where (1≤pos≤|S|)
print the character in the index pos
.
substr l r : where (1≤l,r≤|S|)
print sub-string of s from l to r
.
push_back x : add character x
in the end of the string.*/

void GetStringFunctions(string &S, string Order)
{

    if (Order == "pop_back")
    {
        S.pop_back();
    }
    else if (Order == "front")
    {
        cout << S.front() << endl;
    }
    else if (Order == "back")
    {
        cout << S.back() << endl;
    }
    else if (Order == "sort")
    {
        int l, r;
        cin >> l >> r;
         int st =min(l,r);
       int en =max(l,r);

        sort(S.begin() + (st-1), S.begin() + en);
    }
    else if (Order == "reverse")
    {
        int l, r;
        cin >> l >> r;
       int st =min(l,r);
       int en =max(l,r);

        reverse(S.begin() + (st-1), S.begin() + en);

    }
    else if (Order == "print")
    {
        int p;
        cin>>p;
       if(p>0&&p<=S.length()+1) cout<<S[p-1]<<endl;
    }
    else if (Order == "substr")
    {
        int l, r;
        cin >> l >> r;
          int st =min(l,r);
       int en =max(l,r);

       cout<< S.substr( st-1, (en-st)+1)<<endl;
    }

    else if (Order == "push_back")
    {
        char c;
        cin>>c;
        S.push_back(c);
    }
}

int main()
{

    int size, t;
    string S,Order;
    cin>>size>>t;
    cin>>S;
    while(t--){
      cin>>Order;
        GetStringFunctions(S,Order);
    }
}