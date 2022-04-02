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
int dfs(int indx, int cnt, vector<int>& v, vector<int>& vsd, vector<int>& res)
{
    vsd[indx] = 1;
    if (vsd[v[indx]])
        return res[indx] = cnt;
    cnt++;
    return res[indx] = dfs(v[indx], cnt, v, vsd, res);
}
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n + 1, 0), vsd(n + 1, 0), res(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            v[i] = val;
        }
        for (int i = 1; i <= n; i++)
        {
            if (!vsd[i])
                dfs(i, 1, v, vsd, res);
        }
        for (int i = 1; i <= n; i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}