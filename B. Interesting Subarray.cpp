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
        long long n, x, y;
        bool f = true;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            long long p;
            cin >> p;
            v.push_back(p);
        }
        for(int i=1; i<n; i++)
        {
            if(abs(v[i]-v[i-1])>=2)
            {
                f = false;
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;
                break;
            }
        }
        if(f==true)
            cout<<"NO"<<endl;
    }
}
