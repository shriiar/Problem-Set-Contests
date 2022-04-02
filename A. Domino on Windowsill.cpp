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
        int n, x, y, w, b;
        cin >> n >> x >> y >> w >> b;
        if (x != 0 && y != 0 && w != 0 && b != 0)
        {
            if ((x == w || y == w) && (n - x == b || n - y == b))
                cout << "YES" << endl;
            else if ((x == w || y == w) && (n - (max(x, y)) >= 1 && b == 2))
                cout << "YES" << endl;
            else if (w == 2 && (n - (max(x, y)) >= 1 && b == 2))
                cout << "YES" << endl;
            else if (w == 2 && (n - x == b || n - y == b))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if(w+b==0)
                cout<<"YES"<<endl;
            else if(x==0 && y==0 && w==0 && b!=2 && b!=n)
                cout<<"NO"<<endl;
            else if(x==n && y==n && b==0 && w!=2 && w!=n)
                cout<<"NO"<<endl;
            else if(x==0 && y==0 && w!=0 && (b==2 || b==n))
                cout<<"NO"<<endl;
            else if(x==n && y==n && b!=0 && (w==2 || w==n))
                cout<<"NO"<<endl;
            else if(x==0 && y==0 && w!=0 && b!=2 && b!=n)
                cout<<"NO"<<endl;
            else if(x==n && y==n && b!=0 && w!=2 && w!=n)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}