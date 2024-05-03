#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int  n =str.size();
    int c =0;
    int ans =0;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            c++;
        }
        else{
            ans +=(c*(c+1))/2;
            c =0;
        }
    }
    ans +=(c*(c+1))/2;
    cout<<ans<<endl;

    return 0;
}
/*-----------------------OUTPUT-----------------------------
Input a string and return the number of substrings that contain only vowels.
Input : str = "abjkoe"
Output : 4
Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
Input : str = "hgdhpw"
Output : 0
---------------------------------------------------------------

*/

