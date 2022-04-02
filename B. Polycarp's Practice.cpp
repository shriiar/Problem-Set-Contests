#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vb vector <bool>
#define vl vector <long long>
#define mp make_pair
#define vpi vector <pair<int, int>>
#define vpl vector <pair<long long, long long>>
#define vplb vector <pair<long long, bool>>
#define vpib vector <pair<int, bool>>
#define vv vector <vector<int>>
#define iton (ll i=0; i<n; i++)
#define seti set <int>
#define setl set <long long>
#define mapl map <long long, long long>
#define mapi map <int, int>
#define sz size()
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int n, k, s = 0; cin >> n >> k;
    vi v; vb b(n, 0); vpi t;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        t.pb(mp(x, i));
        v.pb(x);
    }
    sort(t.rbegin(), t.rend());
    for(int i=0; i<k; i++)
    {
        s += t[i].first;
        int x = t[i].second;
        b[x] = 1;
    }
    if(k==1)
    {
        cout<<*max_element(v.begin(), v.end())<<endl<<n<<endl;
        return 0;
    }
    cout<<s<<endl;
    int c = 1;
    for(int i=0; i<n; i++)
    {
        if(k==1)
        {
            cout<<n-i<<endl;
            return 0;
        }
        if(b[i])
        {
            cout<<c<<" ";
            c = 1;
            k--;
            continue;
        }
        c++;
    }
}
