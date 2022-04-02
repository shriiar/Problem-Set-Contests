#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t, x = 1;
    cin >> n >> t;
    vector <int> v;
    v.push_back(0);
    for(int i=1; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(t==1)
        cout<<"YES"<<endl;
    else
    {
        bool f = true;
        for(int i=2; i<n; i++)
        {
            if(x==t)
            {
                cout<<"YES"<<endl;
                break;
            }
            else if(x>t)
            {
                cout<<"NO"<<endl;
                break;
            }
            else if(v[i] <= n-i)
            {
                x = i;
                cout<<x<<endl;
            }
        }
    }
}
