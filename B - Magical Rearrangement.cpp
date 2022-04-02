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
void min_changes(int a[], int n)
{
    int ans_a = 0, ans_b = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) 
        {
            if (a[i] == 0) ans_a++;
            else ans_b++;
        }
        else 
        {
            if (a[i] == 0)
                ans_b++;
            else
                ans_a++;
        }
    }
    for0(i, n) cout << a[i] << " ";
    cout << endl;
}
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        vi v;
        string s;
        for0(i, 10)
        {
            int val, res;
            cin >> val;
            if(val != 0)
            {
                res = i;
                while(val--) s += (res + '0');
            }
        }
        cout << s << endl;
        int a[s.sz];
        for0(i, s.sz) a[i] = (s[i] - '0');
        for0(i, s.sz) cout << a[i] << " ";
        cout << endl;
        min_changes(a, s.sz);
    }
    return 0;
}