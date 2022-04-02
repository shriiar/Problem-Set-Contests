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
        int n;
        cin >> n;
        for(int i=0, j=1; i<n; i++)
        {
            if(i<n-1)
                cout<<j<<" ";
            else
                cout<<j<<endl;
        }
    }
}
