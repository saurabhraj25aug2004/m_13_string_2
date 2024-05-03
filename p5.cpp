#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "i am a piwian";

    string word ="";
    string maxword ="";
    int n =s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            maxword =max(maxword,word);
            word ="";
        }
        else
        {
            word += s[i];
        }
    }
    maxword =max(maxword,word);

    cout<<maxword;
     return 0;
}
/*---------------------OUTPUT----------------------------
Given a sentence ‘str’, return the word that is lexicographically maximum.
Input : str = "proud to be pwians"
Output : pwians
Input : str = "decode dsa with pw"
Output : with
----------------------------------------------------------------
*/