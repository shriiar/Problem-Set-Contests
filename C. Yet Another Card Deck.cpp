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
    int n, k, indx = 1;
    cin >> n >> k;
    vi v;
    vb b(51, 0);
    vi pr(51, 0);
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push_back(val);
        if (b[val] == 0)
        {
            pr[val] = indx;
            b[val] = 1;
        }
        indx++;
    }
    while (k--)
    {
        int val;
        cin >> val;
        cout << pr[val] << " ";
        int dis = pr[val] - 1;
        q.erase(q.begin() + dis);
        q.push_front(val);
        dis += 1;
        for (int i = 1; i <= 50; i++)
        {
            if (i == val)
                continue;
            if (b[i])
            {
                if (pr[i] < dis)
                    pr[i] += 1;
            }
        }
        pr[val] = 1;
    }
    return 0;
}