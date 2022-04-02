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
    int n, a, b, z, sum = 0, ans, cnt;
    cin >> n >> a >> b;
    sum = a + b;
    if(n==sum)
    {
        cout<<1<<endl;
        return 0;
    }
    if(a>b) swap(a, b);
    ans = a;
    while(1)
    {
        int x = a, y = b;
        cnt = (x/ans) + (y/ans);
        if(cnt>=n)
        {
            cout<<ans<<endl;
            return 0;
        }
        ans--;
    }
}