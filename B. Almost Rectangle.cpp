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
        int n;
        cin >> n;
        char a[n][n];
        vpi v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char ch;
                cin >> ch;
                if (ch == '*')
                    v.pb(mp(i, j));
                a[i][j] = ch;
            }
        }
        if (v[0].first == v[1].first)
        {
            if (v[0].first != n - 1)
            {
                int x, y;
                x = v[0].first + 1;
                y = v[0].second;
                a[x][y] = '*';
                y = v[1].second;
                a[x][y] = '*';
            }
            else
            {
                int x, y;
                x = v[0].first - 1;
                y = v[0].second;
                a[x][y] = '*';
                y = v[1].second;
                a[x][y] = '*';
            }
        }
        else if (v[0].second == v[1].second)
        {
            if (v[0].second != n - 1)
            {
                int x, y;
                y = v[0].second + 1;
                x = v[0].first;
                a[x][y] = '*';
                x = v[1].first;
                a[x][y] = '*';
            }
            else
            {
                int x, y;
                y = v[0].second - 1;
                x = v[0].first;
                a[x][y] = '*';
                x = v[1].first;
                a[x][y] = '*';
            }
        }
        else
        {
            int w, x, y, z;
            w = v[0].first, x = v[1].second;
            y = v[1].first, z = v[0].second;
            a[w][x] = '*';
            a[y][z] = '*';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
}