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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.sz; i++)
        {
            if (s[i] == ' ')
                cout << " ";
            else if (s[i] == '0')
                cout << "o";
            else if (s[i] == '1')
                cout << "i";
            else if (s[i] == '3')
                cout << "e";
            else if (s[i] == '4')
                cout << "a";
            else if (s[i] == '5')
                cout << "s";
            else
                cout << "t";
        }
        cout << endl;
    }
    return 0;
}