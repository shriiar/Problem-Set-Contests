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
        string s;
        cin >> s;
        bool f = true;
        int indx;
        for (int i = 0, j = s.sz - 1; i < s.sz && j >= 0; i++, j--)
        {
            if (i > j)
                break;
            if ((s[i] == 'a' && s[j] != 'a') || (s[i] != 'a' && s[j] == 'a') || (s[i] != 'a' && s[j] != 'a'))
            {
                f = false;
                indx = j;
                break;
            }
        }
        if (f == false)
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < s.sz; i++)
            {
                if (i == indx)
                    cout << "a" << s[i];
                else
                    cout << s[i];
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}