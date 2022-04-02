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
double arm(vector<double> &v, double n, double x, double y)
{
    if (x > y)
        swap(x, y);
    sort(v.rbegin(), v.rend());
    double s1 = 0, s2 = 0, sum = 0;
    for (int i = 0; i < x; i++)
        s1 += v[i];
    for (int i = x; i < x + y; i++)
        s2 += v[i];
    sum = s1 / x + s2 / y;
    return sum;
}
int main()
{
    Fastio;
    double n, x, y;
    cin >> n >> x >> y;
    vector<double> v;
    for (int i = 0; i < n; i++)
    {
        double val;
        cin >> val;
        v.pb(val);
    }
    cout << fixed << setprecision(8) << arm(v, n, x, y) << endl;
    return 0;
}