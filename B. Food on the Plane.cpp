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
    string s, t;
    li num, num2, res;
    cin >> s;
    for (int i = 0; i < s.sz - 1; i++)
        t += s[i];
    std::istringstream(t) >> num;
    num2 = num;
    char ch = s[s.sz - 1];
    bool f = true;
    if (num % 2 != 0)
    {
        num2++;
        f = false;
    }
    if (num2 != 2 && (num2 / 2) % 2 == 0)
        num2 -= 2;
    res = (num2 / 4) + 1;
    res *= 2;
    res *= 6;
    res += (num2 - 1);
    res -= 6;
    if (f == false)
        res -= 7;
    if (ch == 'f')
        res++;
    else if (ch == 'e')
        res += 2;
    else if (ch == 'd')
        res += 3;
    else if (ch == 'a')
        res += 4;
    else if (ch == 'b')
        res += 5;
    else
        res += 6;
    cout << res << endl;
    return 0;
}