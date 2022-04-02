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
    int n, m;
    cin >> n >> m;
    int a[n][m];
    vi v(m, 0);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char c;
            cin >> c;
            int x = c - '0';
            a[i][j] = x;
            v[j] += a[i][j];
        }
    }
    bool f = false;
    for(int i=0; i<n; i++)
    {
        int s = 0;
        for(int j=0; j<m; j++)
        {
            v[j] -= a[i][j];
            if(v[j]!=0) s++;
        }
        if(s==m)
        {
            f = true;
            break;
        }
        for(int j=0; j<m; j++)
            v[j] += a[i][j];
    }
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
