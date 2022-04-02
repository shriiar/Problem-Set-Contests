#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod = 1e9 + 7
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
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {   
        int n, res = 0, dis, sum = 0, cnt = 0;
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << 2 << endl;
        else if (n == 3)
            cout << 2 << endl;
        else if (n == 4)
            cout << 2 << endl;
        else
        {
            res += n;
            vi v;
            v.pb(1);
            v.pb(3);

            sum += 1;
            sum += 3;

            res -= 1;
            res -= 3;
            cnt += 3;
            while (1)
            {
                dis = n - sum;
                bool f = binary_search(v.begin(), v.end(), dis);
                if (f)
                {
                    v.pb(dis);
                    break;
                }
                f = binary_search(v.begin(), v.end(), dis - 1);
                if (f)
                {
                    v.pb(dis-1);
                    break;
                }
                f = binary_search(v.begin(), v.end(), dis - 2);
                if (f)
                {
                    v.pb(dis-2);
                    break;
                }
                f = binary_search(v.begin(), v.end(), dis + 1);
                if (f)
                {
                    v.pb(dis+1);
                    break;
                }
                f = binary_search(v.begin(), v.end(), dis + 2);
                if (f)
                {
                    v.pb(dis+2);
                    break;
                }
                cnt += 2;
                v.pb(cnt);
                sum += cnt;
            }
            cout << v.sz << endl;
        }
    }
}