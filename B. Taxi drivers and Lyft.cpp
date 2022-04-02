#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, m;
    cin >> n >> m;
    vector <int> v;
    vector <bool> b;
    vector <int> u;
    vector <int> s;
    vector <int> t(m, 0);
    for(int i=0; i<n+m; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<n+m; i++)
    {
        long long x;
        cin >> x;
        b.push_back(x);
    }
    for(int i=0; i<n+m; i++)
    {
        if(b[i]) s.push_back(v[i]);
        else u.push_back(v[i]);
    }
    for(int i=0; i<n; i++)
    {
        long long x, y;
        y = (upper_bound(s.begin(), s.end(), u[i]) - s.begin());
        if(y==0) t[0]++;
        else if(y==m) t[m-1]++;
        else
        {
            x = y-1;
            if(abs(s[y]-u[i])>=abs(s[x]-u[i])) t[x]++;
            else t[y]++;
        }
    }
    for(int i=0; i<m; i++)
        cout<<t[i]<<" ";
    cout<<endl;
}
