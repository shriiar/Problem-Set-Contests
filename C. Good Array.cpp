#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int main()
{
    Fastio;
    ll n, mx, val, sum = 0;
    cin >> n;
    vi v, st, res;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        sum += val;
        v.pb(val);
        st.pb(val);
    }
    if(n==1)
    {
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    sort(st.begin(), st.end());
    for (int i = 0; i < n; i++)
    {
        val = v[i];
        sum -= val;
        if (val != st[n - 1])
            mx = st[n - 1];
        else
            mx = st[n - 2];
        sum -= mx;
        if (sum == mx)
            res.pb(i + 1);
        sum += mx;
        sum += val;
    }
    cout << res.sz << endl;
    for (int i = 0; i < res.sz; i++)
        cout << res[i] << " ";
    if (res.sz != 0)
        cout << endl;
    return 0;
}