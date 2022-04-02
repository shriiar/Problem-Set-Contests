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

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n + 2, 0), res;
        for0(i, n)
        {
            int val;
            cin >> val;
            v[i + 1] = val;
        }
        if (v[1] == 1)
        {
            cout << n + 1 << " ";
            for1(i, n) cout << i << " ";
            cout << endl;
        }
        else if (v[n] == 0)
        {
            for1(i, n + 1) cout << i << " ";
            cout << endl;
        }
        else
        {
            int id1 = -1, id2 = -1;
            for1(i, n)
            {
                if (v[i] == 0) id1 = i;
                else break;
            }
            if (id1 != -1)
            {
                for (int i = id1 + 1; i <= n; i++)
                {
                    if (v[i] == 1)
                    {
                        id2 = i;
                        break;
                    }
                }
                if (id1 != -1 && id2 != -1)
                {
                    for(int i = 1; i <= id1; i++) res.pb(i);
                    res.pb(n + 1);
                    for(int i = id2; i <= n; i++) res.pb(i);
                    if(res.sz == n + 1)
                    {
                        for0(i, res.sz) cout<<res[i]<<" ";
                        cout<<endl;
                    }
                    else cout << -1 << endl;
                }
            }
            else cout<<-1<<endl;
        }
    }
    return 0;
}