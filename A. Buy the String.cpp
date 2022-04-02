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
        int n, c0, c1, h, z = 0, o = 0, m = 0;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                m += c0;
            else
                m += c1;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                z += h;
            z += c0;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                o += h;
            o += c1;
        }
        int x = min(o, z);
        int y = min(m, x);
        cout<<y<<endl;
    }
}
