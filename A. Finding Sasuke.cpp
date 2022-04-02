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
        int n;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int x = n / 2;
        for(int i=v.size()-1; i>=x; i--)
            cout<<v[i]<<" ";
        for(int i=x-1; i>=0; i--)
        {
            if(i>0)
                cout<<v[i]*(-1)<<" ";
            else
                cout<<v[i]*(-1)<<endl;
        }
        v.clear();
    }
}
