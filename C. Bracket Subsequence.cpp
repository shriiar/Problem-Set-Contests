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
    int n, k, z; string s; cin >> n >> k >> s;
    vb b(n, 0); z = k / 2;
    for(int i=0; i<n && z>0; i++)
        if(s[i]=='(') b[i] = 1, z--;
    z = k / 2;
    for(int i=0; i<n && z>0; i++)
        if(s[i]==')') b[i] = 1, z--;
    for(int i=0; i<b.size(); i++)
        if(b[i]) cout<<s[i];
    cout<<endl;
    return 0;
}
