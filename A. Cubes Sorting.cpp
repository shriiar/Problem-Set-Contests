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
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int x, c = 0;
        bool f = true;
        x = ((n*(n-1))/2)-1;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(v[i]>v[j])
                {
                    swap(v[i], v[j]);
                    c++;
                }
                if(c>x)
                {
                    f = false;
                    break;
                }
            }
        }
        if(f==true)
            cout<<c<<" "<<"YES"<<endl;
        if(f==false)
            cout<<"NO"<<endl;
    }
}
