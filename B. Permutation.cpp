#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, c = 0;
    cin >> n;
    vector <bool> v(5001, 0);
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        v[x] = 1;
    }
    for(int i=1; i<=n; i++)
    {
        if(v[i]==0)
            c++;
    }
    cout<<c<<endl;
}
