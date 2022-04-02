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
int prime(ll n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            break;
        }
    }
    if (cnt > 0)
        return 0;
    else
        return 1;
}
void seive(vector<bool> &b)
{
    b[0] = 0, b[1] = 0;
    for (int i = 2; i * i <= 1000003; i++)
    {
        if (b[i])
        {
            for (int j = i * i; j <= 1000003; j += i)
                b[j] = 0;
        }
    }
}
int main()
{
    Fastio;
    ll n, cnt = 0;
    cin >> n;
    cnt += n;
    if (prime(n))
    {
        cout << cnt + 1 << endl;
        return 0;
    }
    vb b(1000003, 1);
    seive(b);
    for (int i = 2; i <= b.sz; i++)
    {
        if (b[i])
        {
            if (i > n)
                break;
            while (n % i == 0)
            {
                cnt += (n / i);
                n /= i;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
