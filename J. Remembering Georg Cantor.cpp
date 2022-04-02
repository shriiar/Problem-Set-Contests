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
void seive(vector<bool> &b)
{
    b[0] = 0, b[1] = 0;
    for (int i = 2; i * i <= 100003; i++)
    {
        if (b[i] == 1)
        {
            for (int j = i * i; j <= 100003; j += i)
                b[j] = 0;
        }
    }
}
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, k;
        cin >> n >> m >> k;
        n -= k, m -= k;
        vector<bool> b(100003, 1);
        seive(b);
        vl v;
        vl t;
        for (int i = 2; i * i <= n; i++)
        {
            if (b[i] == 1 && n % i == 0)
                v.pb(i);
        }
        for (int i = 2; i * i <= m; i++)
        {
            if (b[i] == 1 && m % i == 0)
                t.pb(i);
        }
        vl res;
        sort(v.begin(), v.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < v.sz; i++)
        {
            int val = v[i];
            bool g = binary_search(t.begin(), t.end(), val);
            if (g)
                res.pb(val);
        }
        vl rep;
        for (int i = 0; i < res.sz; i++)
        {
            int val = v[i];
            rep.pb(val);
            for (int j = i + 1; j < res.sz; j++)
            {
                val *= res[j];
                rep.pb(val);
            }
        }
        vi ans;
        for (int i = 0; i < rep.sz; i++)
        {
            if (rep[i] > k)
                ans.pb(rep[i]);
        }
        cout << ans.sz << endl;
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.sz; i++)
        {
            cout << ans[i] << " ";
        }
        if (ans.sz != 0)
            cout << endl;
    }
    return 0;
}
