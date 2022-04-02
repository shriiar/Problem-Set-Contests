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
    int n, k, cnt = 0;
    cin >> n >> k;
    char a[n][n];
    char c = 'S';

    for0(i, n)
    {
        for0(j, n)
        {
            if (c == 'S')
            {
                a[i][j] = 'L';
                {
                    c = 'L';
                    cnt++;
                }
            }
            else
            {
                a[i][j] = 'S';
                c = 'S';
            }
        }
        if (n % 2 == 0)
        {
            if (c == 'S')
                c = 'L';
            else
                c = 'S';
        }
    }
    if (k > cnt)
    {
        cout << "NO" << endl;
        return 0;
    }
    cnt -= k;
    for0(i, n)
    {
        for0(j, n)
        {
            if (cnt == 0)
                break;
            if (a[i][j] == 'L')
            {
                a[i][j] = 'S';
                cnt--;
            }
        }
    }
    cout << "YES" << endl;
    for0(i, n)
    {
        for0(j, n)
                cout
            << a[i][j];
        cout << endl;
    }
    return 0;
}