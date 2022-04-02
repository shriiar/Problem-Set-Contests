#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <long long int> v;
    for(int i=0; i<n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y;
        int l = 0, h = n - 1;
        cin >> x;
        if(x<=v[l])
            cout<<"X ";
        else if(x>v[h])
            cout<<v[h]<<" ";
        else
        {
            y = *lower_bound(v.begin(), v.end(), x);
            int z = (lower_bound(v.begin(), v.end(), x)) - v.begin();
            if(y>=x)
            {
                if(z-1>=l)
                    cout<<v[z-1]<<" ";
                else
                    cout<<"X ";
            }
            else
                cout<<y<<" ";
        }
        if(x>=v[h])
            cout<<"X"<<endl;
        else
        {
            y = *upper_bound(v.begin(), v.end(), x);
            int z = (upper_bound(v.begin(), v.end(), x)) - v.begin();
            if(y==x)
            {
                if(z+1<=h)
                    cout<<v[z+1]<<endl;
                else
                    cout<<"X"<<endl;
            }
            else
                cout<<y<<endl;
        }
    }
}
