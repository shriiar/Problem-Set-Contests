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
        long long int n, po = 0, ne = 0;
        cin >> n;
        vector <long long int> v;
        for(int i=0; i<n; i++)
        {
            long long int x;
            cin >> x;
            if(x>=0)
                po += x;
            else
                ne += x;
            v.push_back(x);
        }
        if(po==abs(ne))
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(po>abs(ne))
            {
                sort(v.rbegin(), v.rend());
                for(int i=0; i<n; i++)
                    cout<<v[i]<<" ";
                cout<<endl;
            }
            else
            {
                sort(v.begin(), v.end());
                for(int i=0; i<n; i++)
                    cout<<v[i]<<" ";
                cout<<endl;
            }
            v.clear();
        }
    }
}
