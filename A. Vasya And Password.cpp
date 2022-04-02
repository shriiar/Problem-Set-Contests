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

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        bool x = 0, y = 0, z = 0;
        for0(i, s.sz)
        {
            if(s[i] >= 'a' && s[i] <= 'z') x = 1;
            else if(s[i] >= 'A' && s[i] <= 'Z') y = 1;
            else z = 1;
        }
        if(x && y && z) cout << s;
        else if(x && !y && !z)
        {
            cout << "1A";
            for(int i = 2; i < s.sz; i++) cout << s[i];
        }
        else if(y && !x && !z)
        {
            cout << "1a";
            for(int i = 2; i < s.sz; i++) cout << s[i];
        }
        else if(!x && !y && z)
        {
            cout << "Aa";
            for(int i = 2; i < s.sz; i++) cout << s[i];
        }
        else
        {
            bool f = 0;
            int id1, id2;
            if(x && y && !z)
            {
                for0(i, s.sz)
                {
                    if(s[i] >= 'a' && s[i] <= 'z') id1 = i;
                    if(s[i] >= 'A' && s[i] <= 'Z') id2 = i;
                }
                for0(i, s.sz)
                {
                    if(!f && i != id1 && i != id2) 
                    {
                        cout << 1;
                        f = 1;
                    }
                    else cout << s[i];
                }
            }
            else if(x && z && !y)
            {
                for0(i, s.sz)
                {
                    if(s[i] >= 'a' && s[i] <= 'z') id1 = i;
                    if(s[i] >= '0' && s[i] <= '9') id2 = i;
                }
                for0(i, s.sz)
                {
                    if(!f && i != id1 && i != id2) 
                    {
                        cout << "A";
                        f = 1;
                    }
                    else cout << s[i];
                }
            }
            else if(y && z && !x)
            {
                for0(i, s.sz)
                {
                    if(s[i] >= '0' && s[i] <= '9') id1 = i;
                    if(s[i] >= 'A' && s[i] <= 'Z') id2 = i;
                }
                for0(i, s.sz)
                {
                    if(!f && i != id1 && i != id2) 
                    {
                        cout << "a";
                        f = 1;
                    }
                    else cout << s[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}