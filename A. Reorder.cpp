#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--)
    {
        int n, m, s = 0;
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            s += x;
        }
        if(s==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
