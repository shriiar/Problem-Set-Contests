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
        string s, t, res, ss;
        cin >> s >> t;
        ss = s;
        if(s.sz < t.sz)
        {
            string dx;
            int dis = t.sz - s.sz;
            for0(i, dis) dx += '0';
            for0(i, s.sz) dx += s[i];
            s.clear();
            s = dx;
            dx.clear();
        }
        int id = s.sz - 1;
        bool f = 0;
        for(int i = s.sz - 1; i >= 0 && id >= 0; i--)
        {
            if(s[i] > t[id])
            {
                string x;
                x += t[id - 1], x += t[id];
                int y = t[id - 1] - '0', z = s[i] - '0', rep;
                y *= 10;
                y += (t[id] -'0');
                rep = y - z;
                x = to_string(rep);
                if(x.sz >= 2) reverse(all(x));
                res += x;
                id -= 2;
            }
            else
            {
                int y = s[i] - '0', z = t[id] - '0', rep;
                id -= 1;
                rep = abs(y - z);
                string x;
                x = to_string(rep);
                res += x;
            }
        }
        // cout << "GG" << endl;
        reverse(all(res));
        cout << res << endl;
        string dx, ans;
        dx = res;
        string aans;
        if(dx.sz <= ss.sz)
        {
            int i = dx.sz - 1, j = ss.sz - 1;
            for(; i >= 0 && j >= 0; i--, j--)
            {
                int p = ss[j] - '0', q = dx[i] - '0', sum;
                sum = p + q;
                string pq;
                pq = to_string(sum);
                if(pq.sz >= 2) reverse(all(pq));
                ans += pq;
            }
            reverse(all(ans));
            for(int p = 0; p <= j; p++) aans += t[p];
            for(int i = 0; i < ans.sz; i++) aans += ans[i];
        }
        else
        {
            int i = ss.sz - 1, j = dx.sz - 1;
            for(; i >= 0 && j >= 0; i--, j--)
            {
                int p = ss[i] - '0', q = dx[j] - '0', sum;
                sum = p + q;
                string pq;
                pq = to_string(sum);
                if(pq.sz >= 2) reverse(all(pq));
                ans += pq;
            }
            reverse(all(ans));
            for(int p = 0; p <= j; p++) aans += t[p];
            for(int i = 0; i < ans.sz; i++) aans += ans[i];
        }
        f = 0;
        string aaans;
        for0(i, dx.sz)
        {
            if(!f && dx[i] == '0') continue;
            else
            {
                f = 1;
                aaans += dx[i];
            }
        }
        if(aaans.sz == 0) cout << -1 << endl;
        else if(t == aans) cout << aaans << endl;
        else cout << -1 << endl;
    }
    return 0;
}