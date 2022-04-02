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
        int n, p;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        bool f = true, g;
        for(int i=1; i<=1024; i++)
        {
            f = true, g;
            for(int j=0; j<v.size(); j++)
            {
                int z = v[j] ^ i;
                g = binary_search(v.begin(), v.end(), z);
                if(g==false)
                    break;
            }
            if(g==true)
            {
                p = i;
                f = false;
                break;
            }
        }
        if(f==false)
            cout<<p<<endl;
        else
            cout<<"-1"<<endl;
    }
}
