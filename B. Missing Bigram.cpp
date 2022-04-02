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
        int n, cnt = 0, id = 0;
        cin >> n;
        cnt += ((n - 2)  * 2);
        vs v, res;
        for0(i, n - 2)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        if(cnt < n)
        {
            cnt = n - cnt;
            while(cnt--) cout << "a";
            for0(i, v.sz) cout << v[i];
            cout << endl;
            continue;
        }
        if(cnt == n)
        {
            for0(i, v.sz) cout << v[i];
            cout << endl;
            continue;
        }
        res.pb(v[0]);
        bool f = 0;
        for1(i, v.sz - 1)
        {
            if(!f)
            {
                if(res[id].sz == 2)
                {
                    if(res[id][1] == v[i][0])
                    {
                        cnt--;
                        string x;
                        x += v[i][1];
                        res.pb(x);
                        id++;
                    }
                    else 
                    {
                        res.pb(v[i]);
                        id++;
                    }
                }
                else
                {
                    if(res[id][0] == v[i][0]) 
                    {
                        cnt--;
                        string x;
                        x += v[i][1];
                        res.pb(x);
                        id++;
                    }
                    else 
                    {
                        res.pb(v[i]);
                        id++;
                    }
                }
                if(cnt == n) f = 1;
            }
            else res.pb(v[i]);
        }
        for0(i, res.sz) cout << res[i];
        cout << endl;
    }
    return 0;
}