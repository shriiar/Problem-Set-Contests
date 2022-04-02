#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int x = s.size(), m=0;
        for(int i=0; i<x; i++)
        {
            m += (s[i]-'0');
        }
        cout<<m<<endl;
    }
}
