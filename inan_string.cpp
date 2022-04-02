#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
ll search(vector<pair<string, bool>> &bv, ll n, string res)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (res == bv[mid].first)
            return mid;
        else if (res < bv[mid].first)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    Fastio;
    int n;
    cin >> n;
    vector<pair<string, string>> qv;
    vector<pair<string, string>> av;
    vector<pair<string, bool>> bv;
    for (int i = 0; i < n; i++) // question input
    {
        string x, y; // x is id and y is question
        cin >> x;
        getline(cin, y);
        qv.pb(mp(x, y));
        bool f = 0;
        bv.pb(mp(x, f));
    }
    sort(bv.begin(), bv.end());
    for (int i = 0; i < n; i++) // answer with specific id input;
    {
        string x, y; // x is id and y is answer
        cin >> x;
        getline(cin, y);
        int index = search(bv, bv.sz, x);
        // cout << bv[index].first << endl;
        bv[index].second = 1;
        // if (bv[index].second)
            // cout << "Id " << x << " your question has been answered!" << endl;
        bv[index].second = 0;
        av.pb(mp(x, y));
    }
    for (int i = 0; i < n; i++)
        cout << av[i].first << " " << av[i].second << endl;
}