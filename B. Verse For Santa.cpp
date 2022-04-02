#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
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
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, sum = 0, indx, mx = 0;
        cin >> n >> s;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
            sum += val;
        }
        if (sum <= s)
        {
            cout << 0 << endl;
            continue;
        }
        sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += v[i];
            if(sum > s)
            {
                indx = i;
                break;
            }
        }
        cout<<(max_element(v.begin()+0, v.begin()+indx+1)-v.begin())+1<<endl;
    }
    return 0;
}