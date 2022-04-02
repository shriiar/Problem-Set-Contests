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
    vi v;
    vector<int>::iterator it;
    // n is number
    // v is vector of intigers
    for (int i = 0; i < n; i++)
    {
        int val;
        // val is value inserted in the vector
        cin >> val;
        v.pb(val);
    }
    sort(v.begin(), v.end());
    int time;
    cin >> time;
    // time is how many times you want to insert a new velus in your vector
    while (time--)
    {
        int val;
        cin >> val;
        // new inserted element by user
        it = upper_bound(v.begin(), v.end(), val);
        if (it != v.end())
        {
            int indx = (it - v.begin());
            // indx is the index number of an element
            if (indx == 0)
                v[indx] = val;
            else
                v[indx - 1] = val;
        }
        else
            v[n - 1] = val;
    }
    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}