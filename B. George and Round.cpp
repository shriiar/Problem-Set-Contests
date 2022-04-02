#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int c = n;
    vector <int> v;
    vector <int> b;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(b[j]>=v[i])
            {
                c--;
                b[j] = 0;
                break;
            }
        }
    }
    cout<<c<<endl;
}
