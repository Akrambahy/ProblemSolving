#include <iostream>

using namespace std;

void SpeedCode()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

/*
    V: Adds to the score 5 points.
    W: Adds to the score 2 points.
    X: Removes the next consecutive character from the string.
    Y: Moves the next consecutive character to the end of the string.
    Z: If the next consecutive character is V it divides the total score by 5 but if it is W it divides the total score by 2. Then it removes the next consecutive character from the string if and only if the next character is V or W. 

Note: In case the string ends with X or Y or Z ignore their operations. The score is calculated from left to right and starts with 0.
 */

int StringScore(string S1, int size)
{
    int score=0;


    for (int i = 0; i < S1.length(); i++)
    {
        
     if(S1[i]!='V' &&S1[i]!='W'&&S1[i]!='X'&&S1[i]!='Y'&&S1[i]!='Z') break;
     else{
        if((S1[i]=='V')) score+=5;
       else if(S1[i]=='W') score+=2;
       else if(S1[i]=='X'&&(i!=S1.length()-1)){i++;}

       else if(S1[i]=='Y'&&(i!=S1.length()-1)){
        char tempChar=S1[i+1];
       
        S1.push_back(tempChar);
        i++;
       }
       else if(S1[i]=='Z'&&(i!=S1.length()-1)){
       if(S1[i+1]=='V') 
       {
        score/=5;
        i++;
       }
      else if(S1[i+1]=='W') 
       {
        score/=2;
       i++;
       }
       }
    }
}
       
return score;

    }
    


int main()
{

    SpeedCode();
    int size;
    string S1;
    cin >> size;
    cin >> S1;
    cout<<StringScore(S1,size)<<endl;
}