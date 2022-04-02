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
        int n, aa = 0, bb = 0, mx = 0, cnt = 0, sum = 0;
        bool f = true;
        cin >> n;
        int i = 0, j = n - 1;
        deque<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.pb(val);
        }
        while (!v.empty())
        {
            f = true;
            while (!v.empty())
            {
                if (f)
                {
                    cnt++;
                    f = false;
                }
                if (sum > mx)
                {
                    mx = sum;
                    sum = 0;
                    break;
                }
                sum += v.front();
                aa += v.front();
                v.pop_front();
            }
            f = true;
            while (!v.empty())
            {
                if (f)
                {
                    cnt++;
                    f = false;
                }
                if (sum > mx)
                {
                    mx = sum;
                    sum = 0;
                    break;
                }
                sum += v.back();
                bb += v.back();
                v.pop_back();
            }
        }
        cout << cnt << " " << aa << " " << bb << endl;
    }
    return 0;
}