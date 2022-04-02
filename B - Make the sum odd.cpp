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
        int n, x, z = 0, o = 0, e = 0;
        cin >> n >> x;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x%2==0)
                e++;
            else
                o++;
            z += x;
            v.push_back(x);
        }
        if(n==x && z%2==0)
            cout<<"NO"<<endl;
        else if(n==x && z%2!=0)
            cout<<"YES"<<endl;
        else
        {
            if(e==0 && x%2==0)
                cout<<"NO"<<endl;
            else if(e==0 && x%2!=0)
                cout<<"YES"<<endl;
            else if(o==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
}
