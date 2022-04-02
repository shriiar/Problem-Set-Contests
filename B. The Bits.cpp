
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vb vector <bool>
#define vl vector <long long>
#define vp vector <make_pair
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int n, c = 0; string s, t; cin >> n >> s >> t;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            int x  = (find(s.begin()+i, s.end(), '1') - s.begin());
            if(x!=n)
                c++;
        }
        else if(s[i]=='1')
        {
            int x  = (find(s.begin()+i, s.end(), '0') - s.begin());
            if(x!=n)
                c++;
        }
    }
    cout<<c<<endl;
}
