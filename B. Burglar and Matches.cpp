#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    int m;
    cin >> n >> m;
    vector <long long> v;
    vector <int> mm;
    vector <bool> b(m, 0);
    for(int i=0; i<m; i++)
    {
        long long x;
        int y;
        cin >> x >> y;
        v.push_back(x);
        mm.push_back(y);
    }
    long long s = 0, ss = 0, x = 0, z;
    bool f = true;
    while(s<n)
    {
        int y = 0;
        for(int i=0; i<m; i++)
        {
            if(mm[i]>y && b[i]==0)
            {
                x = v[i];
                y = mm[i];
                z = i;
            }
        }
        if(x>n && s==0)
        {
            ss += (n*y);
            cout<<ss<<endl;
            f = false;
            break;
        }
        else if(x>n && s!=0)
        {
            ss += (x-n)*y;
            cout<<ss<<endl;
            f = false;
            break;
        }
        else
        {
            if(s+x>n)
            {
                ss += (abs(s-n)*y);
                s += abs(s-n);
                b[z] = 1;
                break;
            }
            else
            {
                ss += (x*y);
                s += x;
                b[z] = 1;
            }
        }
    }
    if(f==true)
        cout<<ss<<endl;
}
