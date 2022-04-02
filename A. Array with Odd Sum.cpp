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
        int n, s = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            s += x;
        }
        if(s%2!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
