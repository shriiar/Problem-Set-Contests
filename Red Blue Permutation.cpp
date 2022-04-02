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
        int n, val = 1;
        cin >> n;
        vi v, tb, tr;
        for0(i, n)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        string s;
        cin >> s;
        bool f = 1;
        for0(i, n)
        {
            if(s[i] == 'B') 
            {
                if(v[i] <= 0) f = 0;
                tb.pb(v[i]);
            }
            else
            {
                if(v[i] > n) f = 0;
                tr.pb(v[i]);
            }
        }
        if(!f) 
        {
            cout << "NO" << endl;
            continue;
        }
        sort(all(tr));
        sort(all(tb));
        for0(i, tb.sz)
        {
            if(val > tb[i])
            {
                f = 0;
                break;
            }
            val++;
        }
        if(!f) 
        {
            cout << "NO" << endl;
            continue;
        }
        for0(i, tr.sz)
        {
            if(val < tr[i])
            {
                f = 0;
                break;
            }
            val++;
        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}