#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y, c;
        cin >> x >> y;
        c = (x | y) - (x & y);
        cout<<c<<endl;
    }
}
