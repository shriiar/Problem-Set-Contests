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
#define pii pair<int, int>
#define pll pair<ll, ll>

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

#define for0(i, n) for (ll i=0;i<n;i++)
#define for1(i, n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define unq(v) (v).erase(unique(all((v))), (v).end())
int dx[]= {-1, 0, 0, 1};
int dy[]= {0, -1, 1, 0};
int dx1[]= {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy1[]= {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int dx2[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy2[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vi v;
        for0(i, n)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        int adj = 1, mx = 1, val = v[0], indx = 0, indx2 = 0;
        for1(i, n - 1)
        {
            if(val == v[i]) adj++;
            else
            {
                if(adj >= mx)
                {
                    mx = adj;
                    indx = i - mx;
                    indx2 = i;
                }
                adj = 1;
                val = v[i];
            }
            if(i == n - 1)
            {
                mx = max(adj, mx);
            }
        }
        int n1 = n - indx2, n2 = indx;
        if(n1 > n2)
        {
            int cnt = 0, n3;
            while(1)
            {
                if(mx >= n1) break; 
                mx *= 2;
                cnt++;
            }
            n3 = n - n2;
            while(1)
            {
                if(n2 <= 0) break;
                n2 = n3 - n2;
                n3 *= 2;
                cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}