#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l, h, c = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(i==0)
        {
            h = x;
            l = x;
        }
        else
        {
            if(x>h)
            {
                h = x;
                c++;
            }
            else if(x<l)
            {
                l = x;
                c++;
            }
        }
    }
    cout<<c<<endl;
}
