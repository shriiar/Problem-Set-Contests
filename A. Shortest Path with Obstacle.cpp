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
int main()
{
    Fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2, c1, c2, x, y;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        if (a1 == b1)
        {
            if (a2 > b2)
                swap(a2, b2);
            if (c2 >= a2 && c2 <= b2 && c1 == a1)
                cout << b2 - a2 + 2 << endl;
            else
                cout << b2 - a2 << endl;
        }
        else if (a2 == b2)
        {
            if (a1 > b1)
                swap(a1, b1);
            if (c1 >= a1 && c1 <= b1 && c2 == a2)
                cout << b1 - a1 + 2 << endl;
            else
                cout << b1 - a1 << endl;
        }
        else
        {
            x = abs(a2 - b2);
            y = abs(a1 - b1);
            cout << x + y << endl;
        }
    }
}