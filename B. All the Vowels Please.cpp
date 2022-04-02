#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
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
void dis(vector<int> &v, int val)
{
    for (int i = 2; i < val; i++)
    {
        if (val % i == 0)
            v.pb(i);
    }
}
int rem(vector<int> &v, int &n, int &m)
{
    bool f = 0;
    for (int i = 0, j = v.sz - 1; i <= j; i++, j--)
    {
        if (v[i] >= 5 && v[j] >= 5)
        {
            n = v[i];
            m = v[j];
            f = 1;
            break;
        }
    }
    return f;
}
int main()
{
    Fastio;
    int val, n, m;
    cin >> val;
    vi v;
    dis(v, val);
    if (rem(v, n, m))
    {
        vector<char> vc;
        vc.pb('a');
        vc.pb('e');
        vc.pb('i');
        vc.pb('o');
        vc.pb('u');

        char a[n][m];
        a[0][0] = 'a';
        a[0][1] = 'e';
        a[0][2] = 'i';
        a[0][3] = 'o';
        a[0][4] = 'u';

        a[1][0] = 'u';
        a[1][1] = 'a';
        a[1][2] = 'e';
        a[1][3] = 'i';
        a[1][4] = 'o';

        a[2][0] = 'o';
        a[2][1] = 'u';
        a[2][2] = 'a';
        a[2][3] = 'e';
        a[2][4] = 'i';

        a[3][0] = 'i';
        a[3][1] = 'o';
        a[3][2] = 'u';
        a[3][3] = 'a';
        a[3][4] = 'e';

        a[4][0] = 'e';
        a[4][1] = 'i';
        a[4][2] = 'o';
        a[4][3] = 'u';
        a[4][4] = 'a';

        for (int i = 5; i < n; i++)
        {
            int idx = 0;
            for (int j = 0; j < 5; j++)
            {
                a[i][j] = vc[idx];
                idx++;
            }
        }
        int idx = 0;
        for (int i = 5; i < m; i++)
        {
            int idx = 0;
            for (int j = 0; j < n; j++)
            {
                a[j][i] = vc[idx];
                idx++;
                if (idx == 5)
                    idx = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << a[i][j];
        }
        cout << endl;
        return 0;
    }
    cout << -1 << endl;
}