#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    string s, t;
    cin >> s >> t;
    bool v[10003] = {};
    for(int i=0; i+m-1<n; i++)
    {
        string z;
        z = s.substr(i, m);
        if(z==t)
            v[i] = 1;
    }
    while(q--)
    {
        int x, y, c = 0;
        cin >> x >> y;
        for(int i=x-1; i+m-1<y; i++)
        {
            if(v[i]==1)
                c++;
        }
        cout<<c<<endl;
    }
}
