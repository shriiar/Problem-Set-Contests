#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector <long long int> v;
    v.push_back(0);
    vector <long long int> b;
    b.push_back(0);
    for(int i=1; i<=n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    for(int i=1; i<=n; i++)
    {
        v[i] += v[i-1];
        b[i] += b[i-1];
    }
    int m;
    cin >> m;
    while(m--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if(t==1)
            cout<<v[r]-v[l-1]<<endl;
        else
            cout<<b[r]-b[l-1]<<endl;
    }
}
