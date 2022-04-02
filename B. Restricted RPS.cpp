#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, r, rr = 0, p, pp = 0, s, ss = 0, x, c = 0;
        cin >> n;
        if(n%2==0)
            x = n/2;
        else
            x = (n/2) +1;
        cin >> r >> p >> s;
        string y;
        cin >> y;
        vector <char> v(y.size(), '0');
        for(int i=0; i<y.size(); i++)
        {
            if(y[i]=='R')
                rr++;
            else if(y[i]=='P')
                pp++;
            else
                ss++;
        }
        for(int i=0; i<y.size(); i++)
        {
            if(y[i]=='R' && p>0)
            {
                p--;
                v[i] = 'P';
                c++;
            }
            else if(y[i]=='P' && s>0)
            {
                s--;
                v[i] = 'S';
                c++;
            }
            else if(y[i]=='S' && r>0)
            {
                r--;
                v[i] = 'R';
                c++;
            }
        }
        for(int i=0; i<n && r>0; i++)
        {
            if(v[i]=='0')
            {
                v[i] = 'R';
                r--;
            }
        }
        for(int i=0; i<n && p>0; i++)
        {
            if(v[i]=='0')
            {
                v[i] = 'P';
                p--;
            }
        }
        for(int i=0; i<n && s>0; i++)
        {
            if(v[i]=='0')
            {
                v[i] = 'S';
                s--;
            }
        }
        if(c>=x)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<y.size(); i++)
                cout<<v[i];
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
