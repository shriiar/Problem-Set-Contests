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
#define pii pair<int, int>
#define pll pair<ll, ll>

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

#define for0(i, n) for (ll i=0;i<n;i++)
#define for1(i, n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define unq(v) (v).erase(unique(all((v))), (v).end())

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;
        vi v;
        for0(i, n)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        sort(all(v));
        vb b(n + 1, 0);
        int val = 1;
        for1(i, n)
        {
            bool f = binary_search(all(v), i);
            if(f)
            {
                auto it = lower_bound(all(v), i);
                b[i] = 1;
                int dis = it - v.begin();
                v.erase(v.begin() + dis);
            }
        }
        bool f = 1;
        int i = 0;
        val = 1;
        while(1)
        {
            if(i == n || val > n) break;
            if(b[val])
            {
                val++;
                continue;
            }
            if(v[i] < val) 
            {
                f = 0;
                break;
            }
            int dis = v[i] - val;
            if(v[i] % dis != val)
            {
                f = 0;
                break;
            }
            cnt++;
            i++;
            val++;
        }
        if(f) cout << cnt << endl;
        else cout << -1 << endl;
    }
    return 0;
}