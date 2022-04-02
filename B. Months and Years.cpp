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
    int n;
    cin >> n;
    bool f = false;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    vi v1;
    vi v2;
    vi v3;
    vi v4;
    for (int i = 0; i < 12; i++)
    {
        v1.pb(31);
        v2.pb(31);
        v3.pb(31);
        v4.pb(31);
    }
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 != 0)
        {
            v1[i] = 30;
            v2[i] = 30;
            v3[i] = 30;
            v4[i] = 30;
        }
    }
    for (int i = 7; i < 12; i++)
    {
        if (i % 2 == 0)
        {
            v1[i] = 30;
            v2[i] = 30;
            v3[i] = 30;
            v4[i] = 30;
        }
    }
    int z = 4;
    while (z--)
    {
        for (int i = 0; i < 12; i++)
        {
            v1.pb(v1[i]);
            v2.pb(v2[i]);
            v3.pb(v3[i]);
            v4.pb(v4[i]);
        }
    }
    for (int x = 1; x < v1.sz;)
    {
        v1[x] = 28;
        x += 12;
    }
    for (int x = 1; x < v1.sz;)
    {
        v2[x] = 28;
        x += 12;
    }
    for (int x = 1; x < v1.sz;)
    {
        v3[x] = 28;
        x += 12;
    }
    for (int x = 1; x < v1.sz;)
    {
        v4[x] = 28;
        x += 12;
    }
    v1[1] = 29;
    v2[13] = 29;
    v3[25] = 29;
    v4[37] = 29;
    for (int i = 0; i < v1.sz; i++)
    {
        bool g = true;
        for (int j = i, c = 0; c < n; j++, c++)
        {
            if (v1[j] != v[c])
            {
                g = false;
                break;
            }
        }
        if (g == true)
        {
            f = true;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
        return 0;
    }
    for (int i = 0; i < v2.sz; i++)
    {
        bool g = true;
        for (int j = i, c = 0; c < n; j++, c++)
        {
            if (v2[j] != v[c])
            {
                g = false;
                break;
            }
        }
        if (g == true)
        {
            f = true;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
        return 0;
    }
    for (int i = 0; i < v3.sz; i++)
    {
        bool g = true;
        for (int j = i, c = 0; c < n; j++, c++)
        {
            if (v3[j] != v[c])
            {
                g = false;
                break;
            }
        }
        if (g == true)
        {
            f = true;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
        return 0;
    }
    for (int i = 0; i < v4.sz; i++)
    {
        bool g = true;
        for (int j = i, c = 0; c < n; j++, c++)
        {
            if (v4[j] != v[c])
            {
                g = false;
                break;
            }
        }
        if (g == true)
        {
            f = true;
            break;
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}