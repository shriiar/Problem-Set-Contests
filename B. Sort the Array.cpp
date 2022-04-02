#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    vector <int> b;
    vector <int> r;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    bool f = true;
    for(int i=0; i<n; i++)
    {
        if(v[i]!=b[i])
        {
            f = false;
            break;
        }
    }
    if(f==true)
        cout<<"yes"<<endl<<"1 1"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(v[i]>v[i+1])
                r.push_back(i);
            else if(r.size()==0)
                continue;
            else
            {
                r.push_back(i);
                break;
            }
        }
        int x = r[0], y = r[r.size()-1], p = x, q = y;
        while(x<y)
        {
            swap(v[x], v[y]);
            x++;
            y--;
        }
        bool g = true;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>v[i+1])
            {
                g = false;
                break;
            }
        }
        if(g==true)
            cout<<"yes"<<endl<<p+1<<" "<<q+1<<endl;
        else
            cout<<"no"<<endl;
    }
}
