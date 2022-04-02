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
        int n, ans = 0, indx = 0;
        cin >> n;
        string s;
        cin >> s;
        vi v;
        for0(i, n)
        {
            if(s[i] == '1')
            {
                for(int j = n - 1; j > i; j--)
                {
                    if(s[j] == '0')
                    {
                        swap(s[i], s[j]);
                        v.pb(i + 1), v.pb(j + 1);
                        break;
                    }
                }
            }
        }
        if(v.sz != 0)
        {
            cout << 1 << endl << v.sz << " ";
            sort(all(v));
            for0(i, v.sz) cout << v[i] << " ";
            cout << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}