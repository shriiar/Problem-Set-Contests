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
        string s;
        cin >> s;
        long long d = 1e9+3, dd, x, y, z, mn, mx;
        bool f = false, g = false, h = false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                x = i;
                f = true;
            }
            else if(s[i]=='2')
            {
                y = i;
                g = true;
            }
            else if(s[i]=='3')
            {
                z = i;
                h = true;
            }
            if(f==true && g==true && h==true)
            {
                mn = min(x, y);
                mn = min(mn, z);
                mx = max(x, y);
                mx = max(mx, z);
                dd = mx - mn + 1;
                d = min(d, dd);
            }
        }
        if(d==1e9+3)
            cout<<0<<endl;
        else
            cout<<d<<endl;
    }
}
