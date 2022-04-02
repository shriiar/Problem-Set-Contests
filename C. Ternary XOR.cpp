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
        long long n, p;
        cin >> n;
        p = 1e9+3;
        string s, x, y;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                p = i;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(i<p)
            {
                if(s[i]=='2')
                {
                    x += '1';
                    y += '1';
                }
                else
                {
                    x += '0';
                    y += '0';
                }
            }
            else if(i==p)
            {
                x += '1';
                y += '0';
            }
            else
            {
                if(s[i]=='2')
                {
                    x += '0';
                    y += '2';
                }
                else if(s[i]=='1')
                {
                    x += '0';
                    y += '1';
                }
                else
                {
                    x += '0';
                    y += '0';
                }
            }
        }
        cout<<x<<endl<<y<<endl;
    }
}
