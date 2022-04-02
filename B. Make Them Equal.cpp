#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, o = 0, e = 0;
    cin >> n;
    vector <int> v;
    vector <int> t;
    vector <int> d;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        t.push_back(x);
    }
    sort(v.begin(), v.end());
    sort( t.begin(), t.end() );
    t.erase( unique( t.begin(), t.end() ), t.end() );
    if(t.size()==2)
    {
        int x = abs(t[0]-t[1]);
        if(x%2==0)
            cout<<x/2<<endl;
        else
            cout<<x<<endl;
    }
    else
    {
        for(int i=0; i<t.size()-1; i++)
        {
            int x = abs(t[i]-t[i+1]);
            if(x!=0)
                d.push_back(x);
        }
        sort( d.begin(), d.end() );
        d.erase( unique( d.begin(), d.end() ), d.end() );
        if(d.size()>1)
            cout<<-1<<endl;
        else
        {
            int x = d[0];
            for(int i=0; i<n; i++)
            {
                if(i==0)
                    v[0] += x;
                else
                {
                    if(v[i]==v[i-1])
                        continue;
                    else if(v[i]>v[i-1])
                        v[i] -= x;
                    else
                        v[i] += x;
                }
            }
            set <int> s;
            for(int i=0; i<v.size(); i++)
                s.insert(v[i]);
            if(s.size()==1)
                cout<<x<<endl;
            else
                cout<<-1<<endl;
        }
    }
}
