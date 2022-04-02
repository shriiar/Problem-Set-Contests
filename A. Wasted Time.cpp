#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, x, y, a, b;
    double s = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        if(i==0)
        {
            x = a;
            y = b;
        }
        else
        {
            s += sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
            x = a;
            y = b;
        }
    }
    s /= 50.0;
    s *= k;
    cout<<fixed<<setprecision(9)<<s<<endl;
}
