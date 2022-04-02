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
    int n, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0;
    cin >> n;
    vi res;
    for0(i, n)
    {
        int val;
        cin >> val;
        res.pb(val);
    }
    for0(i ,n)
    {
        if(res[i] == 4) cnt1++;
        else if(res[i] == 8 && cnt1 - cnt2 > 0) cnt2++;
        else if(res[i] == 15 && cnt2 - cnt3 > 0) cnt3++;
        else if(res[i] == 16 && cnt3 - cnt4 > 0) cnt4++;
        else if(res[i] == 23 && cnt4 - cnt5 > 0) cnt5++;
        else if(res[i] == 42 && cnt5 - cnt6 > 0) cnt6++;
    }
    cout << n - cnt6 * 6 << endl;
    return 0;
}