#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
#define fr first
#define se second

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vvi vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int n, m, k, ans = -1, cnt = 0;
    cin >> n >> m;
    vpi vm, vk;
    for0(i, m)
    {
        int a, b;
        cin >> a >> b;
        vm.pb(mp(a, b));
    } 
    cin >> k;
    for0(i, k)
    {
        int a, b;
        cin >> a >> b;
        vk.pb(mp(a, b));
    }
    for0(mask, pow(2, k))
    {
        vi b(n + 10, 0);
        for0(i, k)
        {
            // cout << vk[i].fr << " " << vk[i].se << endl;
            if(mask & (1 << i)) b[vk[i].fr] = 1;
            else b[vk[i].se] = 1;
        }
        int cnt = 0;
        for0(i, m)
        {
            // cout << m << " " << b[vm[i].fr] << " " << b[vm[i].se] << endl;
            if(b[vm[i].fr] && b[vm[i].se]) cnt++;

        }
        ans = max(ans, cnt);
        // cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}