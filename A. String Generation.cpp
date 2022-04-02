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
        int n, k;
        cin >> n >> k;
        for(int i=0; i<k; i++)
            cout<<"a";
        int i;
        for(i=0; i<n-k; i++)
        {
            if(i+3<=n-k)
            {
                i += 2;
                cout<<"cba";
            }
            else if(i+2<=n-k)
            {
                i += 1;
                cout<<"cb";
            }
            else
            {
                cout<<"c";
            }
        }
        cout<<endl;
    }
}
