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
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, o = 0, z = 0, indx = -1;
        string s, t;
        bool f = 0, ans = 1;
        cin >> n >> s >> t;
        for0(i, n)
        {
            if(s[i] == '0') z++;
            else o++;
        }
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == t[i] && s[i] == '1') o--;
            else if(s[i] == t[i] && s[i] == '0') z--;
            else
            {
                indx = i;
                break;
            }
        }
        if(o == 0 && z == 0 && indx == -1)
        {
            cout << "YES" << endl;
            continue;
        }
        while(indx >= 0)
        {
            // cout << indx + 1 << " " << z << " " << o << endl;
            if(o != z)
            {
                ans = 0;
                break;
            }
            for(;indx >= 0; indx--)
            {
                if(!f)
                {
                    // cout << "INDX -> " << indx + 1 << endl;
                    // cout << "VAL -> " << s[indx] << " " << t[indx] << endl;
                    if(s[indx] == t[indx]) break;
                    if(s[indx] != t[indx] && t[indx] == '1') o--;
                    else if(s[indx != t[indx] && t[indx] == '0']) z--;
                }
                else
                {
                    if(s[indx] != t[indx]) break;
                    if(s[indx] == t[indx] && s[indx] == '1') o--;
                    else if(s[indx] == t[indx] && s[indx] == '0') z--;
                }
            }
            swap(o, z);
            if(!f) f = 1;
            else f = 0;
            // cout << "After -> " << indx + 1 << " " << z << " " << o << endl;
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}