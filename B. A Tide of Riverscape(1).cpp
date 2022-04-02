#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vb vector <bool>
#define vl vector <long long>
#define mp make_pair
#define vpi vector <pair<int, int>>
#define vpl vector <pair<long long, long long>>
#define vplb vector <pair<long long, bool>>
#define vpib vector <pair<int, bool>>
#define vv vector <vector<int>>
#define iton (ll i=0; i<n; i++)
#define seti set <int>
#define setl set <long long>
#define mapl map <long long, long long>
#define mapi map <int, int>
#define sz size()
#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    Fastio;
    int n, p;
    string s;
    cin >> n >> p >> s;
    bool f = false;
    for(int i=0; i<n; i++)
    {
        if(i+p<n)
        {
            if(s[i]!=s[i+p])
            {
                if(s[i]=='0' && s[i+p]=='.') s[i+p] = '1';
                else if(s[i]=='1' && s[i+p]=='.') s[i+p] = '0';
                else if(s[i]=='.' && s[i+p]=='0') s[i] = '1';
                else if(s[i]=='.' && s[i+p]=='1') s[i] = '0';
                f = true;
            }
            else if(s[i]=='.' && s[i+p]=='.')
            {
                s[i] = '0';
                s[i+p] = '1';
                f = true;
            }
        }
        else
            break;
    }
    if(f)
    {
        for(int i=0; i<n; i++)
        {
            if(s[i]=='.') s[i] = '1';
        }
        cout<<s<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}