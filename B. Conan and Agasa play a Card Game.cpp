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
    int n, ans, sum = 0;
    cin >> n;
    vi v(1e5 + 3, 0);
    vi res;
    for
        iton
        {
            int x;
            cin >> x;
            v[x]++;
        }
    for (int i = v.sz; i > 0; i--)
    {
        if (v[i] != 0)
            res.pb(v[i]);
    }
    if (res[0] % 2 != 0)
    {
        cout << "Conan" << endl;
        return 0;
    }
    bool f = false;
    sum = res[0];
    for (int i = 1; i < res.sz; i++)
    {
        ans = sum + (res[i] - 1);
        if (ans % 2 == 0)
        {
            f = true;
            break;
        }
        sum += res[i];
    }
    if (f)
        cout << "Conan";
    else
        cout << "Agasa";
    cout << endl;
    return 0;
}