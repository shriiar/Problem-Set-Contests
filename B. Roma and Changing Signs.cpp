#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, k, s = 0;
    cin >> n >> k;
    vector <int> v;
    vector <int> b;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x>=0)
            v.push_back(x);
        else
            b.push_back(x);
    }
    if(b.size()>0 && v.size()>0)
    {
        for(int i=0; i<b.size() && k>0; i++, k--)
            b[i] = abs(b[i]);
        if(k>0)
        {
            if(k%2!=0)
            {
                if(b[b.size()-1]<=v[0])
                    b[b.size()-1] = b[b.size()-1] * -1;
                else
                    v[0] = v[0] * -1;
            }
        }
    }
    else if(v.size()>0 && b.size()==0)
    {
        if(k%2!=0)
            v[0] = v[0] * -1;
    }
    else
    {
        for(int i=0; i<b.size() && k>0; i++, k--)
            b[i] = abs(b[i]);
        if(k>0)
        {
            if(k%2!=0)
                b[b.size()-1] = b[b.size()-1] * -1;
        }
    }
    for(int i=0; i<b.size(); i++)
        s += b[i];
    for(int i=0; i<v.size(); i++)
        s += v[i];
    cout<<s<<endl;
}
