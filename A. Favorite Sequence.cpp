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
        int n;
        cin >> n;
        vector <long long> v;
        for(int i=1; i<=n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        if(n%2!=0)
        {
            int x = n / 2;
            for(int i=0; i<x; i++)
            {
                cout<<v[i]<<" "<<v[(v.size()-1)-i]<<" ";
            }
            cout<<v[x]<<endl;
        }
        else
        {
            int x = n / 2;
            for(int i=0; i<x; i++)
            {
                if(i==x-1)
                    cout<<v[i]<<" "<<v[(v.size()-1)-i]<<endl;
                else
                    cout<<v[i]<<" "<<v[(v.size()-1)-i]<<" ";
            }
        }
    }
}
