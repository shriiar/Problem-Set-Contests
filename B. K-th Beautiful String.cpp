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
        int n, k, ind = 2, rep = 1, cnt, diff = 0;
        cin >> n >> k;
        cnt = n - 1;
        string s;
        if (k == 1)
        {
            for (int i = 0; i < n - 2; i++)
                cout << "a";
            cout << "bb" << endl;
            continue;
        }
        vi vs(n, 0);
        for (int i = 0; i < n; i++)
            s += 'a';
        for (int i = n - 3; i >= 0; i--)
        {
            vs[i] = ind + rep;
            rep += ind;
            ind++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (vs[i] >= k)
            {
                diff = vs[i] - k;
                break;
            }
            cnt--;
        }
        s[cnt] = 'b';
        diff += (cnt + 1);
        s[diff] = 'b';
        for (int i = 0; i < n; i++)
            cout << s[i];
        cout << endl;
    }
    return 0;
}