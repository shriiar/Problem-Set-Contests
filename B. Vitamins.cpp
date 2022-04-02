#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ax = 1e8, bx = 1e8, cx = 1e8, abx = 1e8, bcx = 1e8, acx = 1e8, abcx = 1e8, res1, res2, res3, res4, res5, res6, res7, res8, res;
    cin >> n;
    vector <pair<int,string>> v;
    for(int i=0; i<n; i++)
    {
        int x; string t;
        cin >> x >> t;  v.push_back(make_pair(x, t));
    }
    for(int i=0; i<n; i++)
    {
        if(v[i].second=="A")
        {
            if(v[i].first<ax)
                ax = v[i].first;
        }
        else if(v[i].second=="B")
        {
            if(v[i].first<bx)
                bx = v[i].first;
        }
        else if(v[i].second=="C")
        {
            if(v[i].first<cx)
                cx = v[i].first;
        }
        else if(v[i].second=="AB" || v[i].second=="BA")
        {
            if(v[i].first<abx)
                abx = v[i].first;
        }
        else if(v[i].second=="BC" || v[i].second=="CB")
        {
            if(v[i].first<bcx)
                bcx = v[i].first;
        }
        else if(v[i].second=="AC" || v[i].second=="CA")
        {
            if(v[i].first<acx)
                acx = v[i].first;
        }
        else if(v[i].second=="ABC" || v[i].second=="BAC" || v[i].second=="CAB" || v[i].second=="ACB" || v[i].second=="BCA" || v[i].second=="CBA")
        {
            if(v[i].first<abcx)
                abcx = v[i].first;
        }
    }
    res1 = ax + bx + cx, res2 = ax + bcx, res3 = bx + acx, res4 = cx + abx, res5 = abcx;
    res = min(res1, min(res2, min(res3, min(res4, res5))));
    res6 = abx + bcx, res7 = abx + acx, res8 = acx + bcx;
    res = min(res, min(res6, min(res7, res8)));
    if(res<1e8) cout<<res<<endl;
    else cout<<-1<<endl;
    return 0;
}
