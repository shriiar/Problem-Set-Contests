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
#define vvc vector <vector<char>>
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
    int n, m;
    cin >> n >> m;
    char v[55][55];
    for1(i, n) 
    {
        for1(j, m) 
        cin >> v[i][j];
    }
    for1(i, n)
    {
        for1(j, m)
        {
            if(v[i][j] != '0')
            {
                int cnt = 0;
                if(v[i][j] == v[i + 1][j]) cnt++;
                if(v[i][j] == v[i - 1][j]) cnt++;
                if(v[i][j] == v[i][j + 1]) cnt++;
                if(v[i][j] == v[i][j - 1]) cnt++;
                if(cnt < 2)
                {
                    v[i][j] = '0';
                    i = 1, j = 0;
                }
            }
        }
    }
    int cnt = 0;
    for1(i, n)
    {
        for1(j, m) cout << v[i][j] << " ";
        cout << endl;
    }
    for1(i, n)
    {
        for1(j, m)
        {
            if(v[i][j] != '0') cnt++;
        }
    }
    if(cnt > 3) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}