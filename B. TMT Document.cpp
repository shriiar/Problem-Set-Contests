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
    int z;
    cin >> z;
    while (z--)
    {
        int n, tt = 0, mm = 0;
        cin >> n;
        string s;
        cin >> s;
        bool f = true;
        vl t, t1, t2, m;
        for (int i = 0; i < s.sz; i++)
        {
            if (s[i] == 'T')
            {
                tt++;
                t.pb(i);
            }
            else
            {
                mm++;
                m.pb(i);
            }
        }
        if(mm>tt || tt/2!=mm)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if (s[0] == 'M' || s[n - 1] == 'M')
        {
            cout << "NO" << endl;
            continue;
        }
        for(int i=0; i<t.sz/2; i++)
            t1.pb(t[i]);
        for(int i=t.sz/2; i<t.sz; i++)
            t2.pb(t[i]);
        for (int i = 0; i < m.sz; i++)
        {
            if (t1[i] > m[i])
            {
                f = false;
                break;
            }
        }
        if (f == false)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < m.sz; i++)
        {
            if (t2[i] < m[i])
            {
                f = false;
                break;
            }
        }
        if (f == false)
        {
            cout << "NO" << endl;
            continue;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}