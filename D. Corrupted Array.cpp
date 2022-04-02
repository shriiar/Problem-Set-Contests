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
        ll n, sum = 0, id1 = -1, id2 = -1;
        cin >> n;
        vl v, res;
        for0(i, n + 2)
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
        sort(all(v));
        for0(i, n + 2) sum += v[i];
        for0(i, n + 2)
        {
            ll dis = sum - v[i];
            if(dis - v[n] == v[n])
            {
                id1 = i;
                id2 = n;
                break;
            }
            else if(dis - v[n + 1] == v[n + 1])
            {
                id1 = i;
                id2 = n + 1;
                break;
            }
        }
        if((sum - v[n] - v[n + 1]  == v[n + 1]) || (sum - v[n] - v[n + 1] == v[n]))
        {
            id1 = n;
            id2 = n + 1;
        }
        if(id1 != -1 && id2 != -1 && id1 != id2)
        {
            for0(i, n + 2)
            {
                if(id1 != i && id2 != i) cout << v[i] << " ";
            }
            cout << endl;
            continue;
        }
        cout << -1 << endl;
    }
    return 0;
}