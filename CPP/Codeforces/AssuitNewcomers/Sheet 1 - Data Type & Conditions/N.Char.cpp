// Capital or Small or Digit
#include <bits/stdc++.h>
using namespace std;
enum LetterStates{
    Digit=0, AlphaSmall=1,AlphaCapital=2
};
LetterStates GetState(char Letter){
    if(Letter>=48 && Letter<65) return LetterStates::Digit;
    else if(Letter>=65 && Letter<97) return LetterStates::AlphaCapital;
     else return LetterStates::AlphaSmall;
}

char ConversionLetter(char Letter){
if(GetState(Letter)==LetterStates::AlphaCapital) return Letter+32 ;
else return Letter-32;
}
int main(){
char Letter;
cin>>Letter;
cout<<ConversionLetter(Letter);
}



/*Print a single line contains
 "IS DIGIT" if X is digit otherwise,
  print "ALPHA" in the first line followed 
  by a new line that contains 
  "IS CAPITAL" if X is a capital letter and 
  "IS SMALL" if X is a small letter.

    Digits in ASCII '0' = 48,'1' = 49 ....etc
    Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
    Small letters in ASCII 'a' = 97,'b' = 98 ....etc 

Input
*/
//Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter