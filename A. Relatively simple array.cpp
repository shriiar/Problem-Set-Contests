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
void seive(vector<ll> &pr)
{
    vb b(1e6 + 3, 1);
    b[0] = 0, b[1] = 0;
    for (int i = 2; i * i <= b.sz; i++)
    {
        if (b[i])
        {
            for (int j = i * i; j <= b.sz; j += i)
                b[j] = 0;
        }
    }
    for (int i = 2; i <= b.sz; i++)
    {
        if (b[i])
            pr.pb(i);
    }
}
int main()
{
    Fastio;
    int n, cnt = 0;
    cin >> n;
    vl v, pr;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        v.pb(val);
    }
    if (n == 1)
    {
        cout << 0 << endl
             << v[0] << endl;
        return 0;
    }
    seive(pr);
    for (int i = 0; i < v.sz - 1; i++)
    {
        if (__gcd(v[i], v[i + 1]) != 1)
        {
            for (int j = 0; j < pr.sz; j++)
            {
                if ((__gcd(pr[j], v[i]) == 1) && (__gcd(pr[j], v[i + 1]) == 1))
                {
                    v.insert(v.begin() + i + 1, pr[j]);
                    i++;
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < v.sz; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}