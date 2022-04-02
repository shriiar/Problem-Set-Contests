#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, z = 0, o = 0;
        cin >> n;
        string s, t;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                z++;
            else
                break;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='1')
                o++;
            else
                break;
        }
        if(o+z==n)
            cout<<s<<endl;
        else
        {
            for(int i=0; i<=z; i++)
                t += '0';
            for(int i=0; i<o; i++)
                t += '1';
            cout<<t<<endl;
        }
    }
}
