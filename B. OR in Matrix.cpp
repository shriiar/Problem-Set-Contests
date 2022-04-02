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
#define vv vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int n, m;
    cin >> n >> m;
    bool f = 1;
    vv a(n + 1, vi(m + 1, 1)), b(n + 1, vi(m + 1, 0));
    for0(i, n)
    {
        for0(j, m)
        {
            int val;
            cin >> val;
            b[i][j] = val;
        }
    }
    for0(i, n)
    {
        for0(j, m)
        {
            if(b[i][j] == 0)
            {
                for0(k, m) a[i][k] = 0;
                for0(k, n) a[k][j] = 0;
            }
        }
    }
    for0(i, n)
    {
        for0(j, m)
        {
            int res = 0;
            for0(k, m)
            {
                if(a[i][k] == 1)
                {
                    res = 1;
                    break;
                }
            }
            if(res != 1)
            {
                for0(k, n)
                {
                    if(a[k][j] == 1)
                    {
                        res = 1;
                        break;
                    }
                }
            }
            if(res != b[i][j])
            {
                f = 0;
                break;
            }
        }
    }
    if(f)
    {
        cout << "YES" << endl;
        for0(i, n)
        {
            for0(j, m) cout << a[i][j] << " ";
            cout << endl;
        }
    }
    else cout << "NO" << endl;
    return 0;
}