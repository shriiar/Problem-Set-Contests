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
        long long int n, m, r, c, x, y;
        cin >> n >> m >> r >> c;
        x = max((r-1),(n-r));
        y = max((c-1),(m-c));
        cout<<x+y<<endl;
    }
}
