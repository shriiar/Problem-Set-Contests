#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vb vector <bool>
#define vl vector <long long>
#define vp vector <make_pair<int, int>>
#define vv vector <vector<int>>
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int n; string x, y, s, t; cin >> n >> s >> t;
    x = s, y = t;
    sort(x.begin(), x.end());   sort(y.begin(), y.end());
    if(x==y)
    {
        vi v; char c, cc;
        for(int i=0; i<n; i++)
        {
            c = s[i], cc = t[i];
            if(c==cc) continue;
            string subs = s.substr(i, n);
            int pos = s.find(cc);
            for(int j=i+pos; j>i; j--)
            {
                swap(s[j], s[j-1]);
                v.pb(j);
            }
        }
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    else    cout<<-1<<endl;
}
