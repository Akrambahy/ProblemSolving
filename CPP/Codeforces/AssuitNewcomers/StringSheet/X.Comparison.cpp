#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string MinLexWord(string S1 , string S2){
int Length=min(S1.length(),S2.length());

for(int i=0;i<Length;i++){
  if(S1[i]>S2[i]) return S2;  
  else if(S1[i]<S2[i]) return S1;  
}
 if(S1.length()<=S2.length())  return S1 ;
 else return S2;
}

string ComparisonStringSort(string Word)
{
    if (Word.length() <= 2)
        return Word;
    else
    {
        string LWord = Word.substr(0, 1);
        string RWord = Word.substr(1);
           sort(LWord.begin(),LWord.end());
        sort(RWord.begin(),RWord.end());
        string MinWord = LWord + RWord;
        string CurrentWord;
        for (int i = 2; i < Word.length(); i++)
        {
            LWord = Word.substr(0, i);
            RWord = Word.substr(i);
            sort(LWord.begin(),LWord.end());
            sort(RWord.begin(),RWord.end());
            CurrentWord= LWord + RWord;
            MinWord = MinLexWord(CurrentWord,MinWord);
        }

        return MinWord;
    }
}

int main()
{
    string S;
    cin >> S;
    cout << ComparisonStringSort(S) << endl;
}