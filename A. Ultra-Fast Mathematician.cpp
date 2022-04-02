#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k, p;
    cin >> s >> k;
    int x = s.size();
    for(long long i=0; i<x; i++)
    {
        if(s[i]!=k[i])
            cout<<"1";
        else
            cout<<"0";
    }
}
