#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector <int> a;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    vector <int> b;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    vector <bool> v(m, 1);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int c = 0;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            if(v[j]==1 && abs(a[i]-b[j])<=1)
            {
                c++;
                v[j] = 0;
                break;
            }
        }
    }
    cout<<c<<endl;
}
