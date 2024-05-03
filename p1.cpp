#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string ";
    getline(cin,str);
    string rev =str;
    reverse(rev.begin(),rev.end());
    str+=rev;
    cout<<str;
    return 0;

}

/*
Input a string and concatenate with its reverse string and print it.
Input : str = "PWSkills"
Output : "PWSkillssllikSWP" 
Input : str = "pw"
Output : "pwwp
*/