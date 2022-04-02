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
    int n, k, l, r, sum, sm, rem, rep;
    cin >> n >> k >> l >> r >> sum >> sm;
    vi v(n, 0);
    rep = n;
    n -= k;
    sum -= sm;
    rem = sm % k;
    for(int i = 0; i < k; i++)
    {
        v[i] += ((sm / k) + (rem > 0));
        rem--; 
    }
    sort(all(v));
    if(n != 0)
    {
        rem = sum % n;
        for(int i = 0; i < n; i++)
        {
            v[i] += ((sum / n) + (rem > 0));
            rem--;
        }
    }
    for0(i, rep) cout << v[i] << " ";
    cout << endl;
    return 0;
}