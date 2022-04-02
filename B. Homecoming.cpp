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
#define vv vector <vector<int>>
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
int swp(int a, int b, char ch)
{
    if(ch == 'A') return a;
    else return b;
}
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, p, indx = 0;
        cin >> a >> b >> p;
        string s;
        cin >> s;
        bool f = 0;
        char ch = s[s.sz - 2];
        if((ch == 'A' && a > p) || (ch == 'B' && b > p)) 
        {
            cout << s.sz << endl;
            continue;
        }
        p -= swp(a, b, ch);
        for(int i = s.sz - 3; i >= 0; i--)
        {
            if(s[i] == ch) continue;
            ch = s[i];
            indx = i + 1;
            if((ch == 'A' && a > p) || (ch == 'B' && b > p))
            {
                f = 1;
                break;
            }
            p -= swp(a, b, ch);
        }
        if(!f) cout << 1 << endl;
        else cout << indx + 1 << endl;
    }
    return 0;
}