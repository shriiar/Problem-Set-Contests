#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, l, r, sum = 0, res = 0;
        cin >> n >> l >> r;
        l--, r--;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
            res += val;
        }
        int diff = r - l + 1;
        int rep = diff / n;
        diff %= n;
        sum += (rep * res);
        int indx = l % n;
        while (diff--)
        {
            indx %= n;
            sum += v[indx];
            indx++;
        }
        cout << sum << endl;
    }
    return 0;
}