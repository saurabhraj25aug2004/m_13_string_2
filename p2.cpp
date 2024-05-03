#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    char max1 ='!';
    char max2 ='!';

    for(int i=0;i<str.size();i++)
    {
        if(max1<str[i])
        {
            max2 =max1;
            max1 =str[i];

        }
        else if(max2 <str[i] && str[i]!=max1) max2 =str[i];
    }
    if(max2 =='!') cout<<"no second largest character exist";
    else cout<<"second largest character is : "<<max2;

    return 0;
}
/*-------------------------OUTPUT--------------------
Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8
Input : str = "1241"
Output : 2
--------------------------------------------------------

*/