#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, a, b, c, d, e, f;
        bool aa = false, bb = false, cc = false, dd = false, ee = false, ff = false;
        vector <long long int> z;
        cin >> n;
        vector <int> v;
        vector <int> t;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x>=0)
                v.push_back(x);
            else
                t.push_back(abs(x));
        }
        sort(v.rbegin(), v.rend());
        sort(t.rbegin(), t.rend());
        if(v.size()>=5)
        {
            a = v[0];
            for(int i=1; i<5; i++)
                a *= v[i];
            aa = true;
            if(aa==true)
                z.push_back(a);
        }
        if(v.size()>=1 && t.size()>=4)
        {
            b = v[0];
            for(int i=0; i<4; i++)
                b *= t[i];
            bb = true;
            if(bb==true)
                z.push_back(b);
        }
        if(v.size()>=2 && t.size()>=3)
        {
            c = v[0];
            c *= v[1];
            int y = t.size()-1;
            c *= t[y];
            c *= t[y-1];
            c *= t[y-2];
            c *= -1;
            cc = true;
            if(cc==true)
                z.push_back(c);
        }
        if(v.size()>=3 && t.size()>=2)
        {
            d = v[0];
            for(int i=1; i<3; i++)
                d *= v[i];
            d *= t[0];
            d *= t[1];
            dd = true;
            if(dd==true)
                z.push_back(d);
        }
        if(v.size()>=4 && t.size()>=1)
        {
            e = v[0];
            for(int i=1; i<4; i++)
                e *= v[i];
            e *= t[t.size()-1];
            e *= -1;
            ee = true;
            if(ee==true)
                z.push_back(e);
        }
        if(t.size()>=5)
        {
            int y = t.size()-1;
            f = t[y];
            f *= t[y-1];
            f *= t[y-2];
            f *= t[y-3];
            f *= t[y-4];
            f *= -1;
            ff = true;
            if(ff==true)
                z.push_back(f);
        }
        cout<<*max_element(z.begin(), z.end())<<endl;
    }
}
