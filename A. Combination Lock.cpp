#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c, d, x, y, z = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for(int i=0; i<n; i++)
    {
        c = a[i]-'0';
        d = b[i]-'0';
        x = abs(c-d);
        if(c>d)
            swap(c, d);
        y = (c-1)+(9-d)+2;
        z += min(x, y);
    }
    cout<<z<<endl;
}
