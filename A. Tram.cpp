#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, w, x, y, z;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(i==0)
        {
            x=a;
            y=b;
            w = max(x, y);
        }
        if(i>0)
        {
            x = y - a;
            y = x + b;
            z = max(x, y);
            if(z>w)
            {
                w=z;
            }
        }
    }
    cout<<w<<endl;
}
