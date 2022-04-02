#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout<<n-1<<endl;
        for(int i=2; i<=n; i++)
        {
            if(i==n)
                cout<<i<<endl;
            else
                cout<<i<<" ";
        }
    }
}
