#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k;
    cin >> s;
    int x = s.size();
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x-1; j++)
        {
            if(s[j]=='+')
                continue;
            if(s[j]>s[j+2])
            {
               swap(s[j], s[j+2]);
            }
        }
    }
    cout<<s;
}
