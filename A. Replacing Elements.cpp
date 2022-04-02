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
        int n, d;
        cin >> n >> d;
        vector <int> v;
        bool f = true;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x>d)
                f = false;
            v.push_back(x);
        }
        if(f==true)
            cout<<"YES"<<endl;
        else
        {
            sort(v.begin(), v.end());
            if(v[0]+v[1]<=d)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
