#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define sz size()
#define vs vector<string>
#define ll long long
#define pb push_back

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))
int main()
{
    int t;
    cin >> t;
    for(int z = 0; z < t; z++)
    {
        int p, q, cnt = 0;
        cin >> p >> q;
        vs v;
        for0(i, p)
        {
            string s;
            for0(j, p) s += '.';
            v.pb(s);
        }
        for (int i = 0; i < p; i += 2)
        {
            if (cnt == q) break;
            v[i][i] = 'R';
            cnt++;
        }
        if (cnt == q)
        {
            for0(i, p) cout << v[i] << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}