#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(n==1)
        cout<<"YES"<<endl;
    else if(n==2)
    {
        if(v[0]!=v[1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        sort(v.begin(), v.end());
        bool f = true;
        int x = v[0], y, c = 1, d = 1;
        for(int i=1; i<v.size(); i++)
        {
            if(v[i]==x)
            {
                x = v[i];
                c++;
            }
            else
            {
                x = v[i];
                y = i;
                break;
            }
        }

        for(int i=y+1; i<v.size(); i++)
        {
            if(v[i]==x)
            {
                x = v[i];
                d++;
            }
            else
            {
                y = i;
                x = v[y];
                if(d>c)
                    c = d;
                d = 1;
            }
        }
        if(d>c)
            c = d;
        if(c<=(n+1)/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
