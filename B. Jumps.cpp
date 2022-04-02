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
        int n, c = 0, x = 0;
        cin >> n;
        while(1)
        {
            c++;
            x += c;
            if(x==n+1)
            {
                c++;
                break;
            }
            else if(x>=n)
                break;
        }
        cout<<c<<endl;
    }
}
