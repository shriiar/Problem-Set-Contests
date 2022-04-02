#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m, x = 0, y = 0, a;
    cin >> n;
    vector <long long> v(100009, 0);
    for(int i=1; i<=n; i++)
    {
        cin >> a;
        v[a] = i;
    }
    cin >> m;
    for(int i=0; i<m; i++)
    {
        cin >> a;
        x += v[a];
        y += n - v[a] + 1;
    }
    cout<<x<<" "<<y<<endl;
}
