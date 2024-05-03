#include<bits/stdc++.h>
using namespace std;

bool isanagram(string s, string t)
{
    if(s.size()!=t.size()) return false;

    int cnt[26] ={0};

    int n =s.size();

    for(int i=0;i<n;i++)
    {
        cnt[s[i]-'a']++;
        cnt[t[i]-'a']--;

    }
    

    for(int i=0;i<26;i++)
        if(cnt[i]!=0) return false;
    
    return true;
}

int main()
{
    string s,t;
    cout<<"Enter the two string : ";
    cin>>s>>t;

    isanagram(s,t)?cout<<"yes":cout<<"no";

    return 0;
}

/*------------------------OUTPUT-------------------
Input : s = "car" , t = "arc"
Output : True
Input : s = "book" , t = "hook"
Output : False

*/