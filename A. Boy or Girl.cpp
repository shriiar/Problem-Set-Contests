#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int x = s.size(), c=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    if(c%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
