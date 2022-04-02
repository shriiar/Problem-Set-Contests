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
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int x, y;
        x = b;
        y = abs(c - a);
        long long int z = (x*x) + (y*y);
        z = sqrt(z);
        cout<<z<<endl;
    }
}

