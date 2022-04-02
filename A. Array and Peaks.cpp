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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int res;
        if (n % 2 != 0)
            res = n / 2;
        else
            res = n / 2 - 1;
        int rep1 = 1, rep2 = 3;
        vi v;
        if (k <= res)
        {
            for (int i = 1; i <= n; i += 2)
            {
                v.pb(rep1);
                v.pb(rep2);
                if (rep1 % 2 != 0)
                    rep1++;
                else
                    rep1 += 2;
                rep2 += 2;
            }
            if (n % 2 == 0)
                v[v.sz - 1] = v[v.sz - 1] - 1;
            sort(v.begin()+(k*2), v.end());
            for(int i=0; i<n; i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
        else
        {
            cout << -1 << endl;
            continue;
        }
    }
}