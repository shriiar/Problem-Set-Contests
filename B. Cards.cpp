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
signed main()
{
    Fastio;
    int n, b = 0, g = 0 , r = 0;
    string s;
    cin >> n >> s;
    sort(all(s));
    for0(i, n)
    {
        if(s[i] == 'B') b++;
        else if(s[i] == 'G') g++;
        else r++;
    }
    if(b != 0 && g == 0 && r == 0) cout << "B" << endl;
    else if(b == 0 && g != 0 && r == 0) cout << "G" << endl;
    else if(b == 0 && g == 0 && r != 0) cout << "R" << endl;
    else if(b != 0 && g != 0 && r != 0) cout << "BGR" << endl;
    else if(b != 0 && g != 0 && r == 0)
    {
        if(b == 1 && g == 1) cout << "R" << endl;
        else if(b >= 2 && g >= 2) cout << "BGR" << endl;
        else if(b >= 2 && g == 1) cout << "GR" << endl;
        else if(b == 1 && g >= 2) cout << "BR" << endl;
    }
    else if(b != 0 && g == 0 && r != 0)
    {
        if(b == 1 && r == 1) cout << "G" << endl;
        else if(b >= 2 && r >= 2) cout << "BGR" << endl;
        else if(b >= 2 && r == 1) cout << "GR" << endl;
        else if(b == 1 && r >= 2) cout << "BG" << endl;
    }
    else if(b == 0 && g != 0 && r != 0)
    {
        if(g == 1 && r == 1) cout << "B" << endl;
        else if(g >= 2 && r >= 2) cout << "BGR" << endl;
        else if(g >= 2 && r == 1) cout << "BR" << endl;
        else if(g == 1 && r >= 2) cout << "BG" << endl;
    }
    return 0;
}