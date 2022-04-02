#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, t;
    cin >> s >> t;
    vector <int> v(26, 0);
    vector <int> b(26, 0);
    for(int i=0; i<s.size(); i++)
    {
        int x = s[i] - 'a';
        v[x]++;
    }
    for(int i=0; i<t.size(); i++)
    {
        int x = t[i] - 'a';
        b[x]++;
    }
    int c = 0;
    bool f = true;
    for(int i=0; i<26; i++)
    {
        if(b[i]>=1 && v[i]==0)
        {
            f = false;
            break;
        }
        else if(b[i]>=1 && v[i]>=1)
        {
            int x = min(b[i], v[i]);
            c += x;
        }
    }
    if(f==false)
        cout<<"-1"<<endl;
    else
        cout<<c<<endl;
}
