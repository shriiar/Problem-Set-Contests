#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, c = 0, d = 0, x;
        cin >> n;
        string s;
        cin >> s;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='<')
            {
                x = i;
                break;
            }
        }
        for(int i=x+1; i<n; i++)
            c++;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='>')
            {
                x = i;
                break;
            }
        }
        for(int i=0; i<x; i++)
            d++;
        cout<<min(c, d)<<endl;
    }
}
