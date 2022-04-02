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
        int n, o = 0, e = 0;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x%2==0)
                e++;
            else
                o++;
            v.push_back(x);
        }
        if(e%2==0 && o%2==0)
            cout<<"YES"<<endl;
        else if((e!=0 && o==0) || (e==0 && o!=0))
            cout<<"YES"<<endl;
        else
        {
            sort(v.begin(), v.end());
            bool f = true;
            for(int i=0; i<n-1; i++)
            {
                if((v[i]%2==0 && v[i+1]%2!=0 && abs(v[i]-v[i+1])==1) || (v[i]%2!=0 && v[i+1]%2==0 && abs(v[i]-v[i+1])==1))
                {
                    cout<<"YES"<<endl;
                    f = false;
                    break;
                }
            }
            if(f==true)
                cout<<"NO"<<endl;
        }
    }
}
