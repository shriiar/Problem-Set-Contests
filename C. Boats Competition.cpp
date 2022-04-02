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
        int n, mx = 0, sum; 
        cin >> n;
        sum = n * 2;
        vi v;
        for0(i, n)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        sort(all(v));
        while(1)
        {
            if(sum < 0) break;
            int cnt = 0;
            vb b(n, 0);
            for0(i, n - 1)
            {
                if(!b[i])
                {
                    for(int j = i + 1; j < n; j++)
                    {
                        if(v[i] + v[j] > sum) break;
                        else if(v[i] + v[j] == sum && !b[j]) 
                        {
                            cnt++;
                            b[j] = 1;
                            break;
                        }
                    }
                }
            }
            mx = max(mx, cnt);
            sum--;
        }
        cout << mx << endl;
    }
    return 0;
}