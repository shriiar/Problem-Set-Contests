#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int x = s.size();
    for(int i=1; i<x; i++)
    {
        if(s[i]=='1')
        {
            x++;
            break;
        }
    }
    cout<<x/2<<endl;
}
