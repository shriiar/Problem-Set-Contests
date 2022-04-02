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
    int z;
    cin >> z;
    while(z--)
    {
        string s, t;
        cin >> s;
        char a, b, c;
        bool f = false;

        t = s;
        for(int i=0; i<t.sz; i++)
        {
            if(t[i]=='A') t[i] = ')';
                else t[i] = '(';
        }
        stack <char> ss1;
        for(int i=0; i<t.sz; i++)
        {
            if(!ss1.empty() && ss1.top()=='(' && t[i]==')')
                ss1.pop();
            else
                ss1.push(t[i]);
        }
        if(ss1.empty())
        {
            cout<<"YES"<<endl;
            continue;
        }

        t.clear();
        t = s;
        for(int i=0; i<t.sz; i++)
        {
            if(t[i]=='A') t[i] = '(';
                else t[i] = ')';
        }
        stack <char> ss2;
        for(int i=0; i<t.sz; i++)
        {
            if(!ss2.empty() && ss2.top()=='(' && t[i]==')')
                ss2.pop();
            else
                ss2.push(t[i]);
        }
        if(ss2.empty())
        {
            cout<<"YES"<<endl;
            continue;
        }

        t.clear();
        t = s;
        for(int i=0; i<t.sz; i++)
        {
            if(t[i]=='B') t[i] = ')';
                else t[i] = '(';
        }
        stack <char> ss3;
        for(int i=0; i<t.sz; i++)
        {
            if(!ss3.empty() && ss3.top()=='(' && t[i]==')')
                ss3.pop();
            else
                ss3.push(t[i]);
        }
        if(ss3.empty())
        {
            cout<<"YES"<<endl;
            continue;
        }

        t.clear();
        t = s;
        for(int i=0; i<t.sz; i++)
        {
            if(t[i]=='B') t[i] = '(';
                else t[i] = ')';
        }
        stack <char> ss4;
        for(int i=0; i<t.sz; i++)
        {
            if(!ss4.empty() && ss4.top()=='(' && t[i]==')')
                ss4.pop();
            else
                ss4.push(t[i]);
        }
        if(ss4.empty())
        {
            cout<<"YES"<<endl;
            continue;
        }

        t.clear();
        t = s;
        for(int i=0; i<t.sz; i++)
        {
            if(t[i]=='C') t[i] = ')';
                else t[i] = '(';
        }
        stack <char> ss5;
        for(int i=0; i<t.sz; i++)
        {
            if(!ss5.empty() && ss5.top()=='(' && t[i]==')')
                ss5.pop();
            else
                ss5.push(t[i]);
        }
        if(ss5.empty())
        {
            cout<<"YES"<<endl;
            continue;
        }

        t.clear();
        t = s;
        for(int i=0; i<t.sz; i++)
        {
            if(t[i]=='C') t[i] = '(';
                else t[i] = ')';
        }
        stack <char> ss6;
        for(int i=0; i<t.sz; i++)
        {
            if(!ss6.empty() && ss6.top()=='(' && t[i]==')')
                ss6.pop();
            else
                ss6.push(t[i]);
        }
        if(ss6.empty())
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}
