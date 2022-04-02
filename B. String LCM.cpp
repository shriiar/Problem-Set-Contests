#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int p;
    cin >> p;
    while(p--)
    {
        string s, t, p, q;
        int x, y, z;
        cin >> s >> t;
        x = s.size(), y = t.size();
        z = x*y / __gcd(x, y);
        for(int i=0; i<z/x; i++)
            p += s;
        for(int i=0; i<z/y; i++)
            q += t;
        if(p==q)
            cout<<p<<endl;
        else
            cout<<-1<<endl;
    }
}
