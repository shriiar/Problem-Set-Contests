#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
#define fr first
#define se second

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vvi vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vvi v(n + 1);
        vi ans(5, 0);
        bool f = 1;
        for0(i, n)
        {
            for0(j, 5)
            {
                int val;
                cin >> val;
                v[i].pb(val);
            }
        }
        for0(i, 4)
        {
            f = 0;
            for(int j = i + 1; j < 5; j++)
            {
                int a = 0, b = 0, c = 0;
                for0(k, n)
                {
                    if(v[k][i] && v[k][j]) c++;
                    else if(v[k][i]) a++;
                    else if(v[k][j]) b++;
                }
                if(a < n / 2)
                {
                    while(1)
                    {
                        if(c == 0 || a == n / 2) break;
                        c -= 1;
                        a += 1;
                    }
                }
                if(b < n / 2)
                {
                    while(1)
                    {
                        if(c == 0 || b == n / 2) break;
                        c -= 1;
                        b += 1;
                    }
                }
                if(a >= n / 2 && b >= n / 2)
                {
                    f = 1;
                    break;
                }
            }
            if(f) break;
        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}