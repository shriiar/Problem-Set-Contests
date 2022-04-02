#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, m;
    cin >> n >> m;
    if(m==0)
        cout<<"YES"<<endl;
    else
    {
        vector <int> v;
        for(int i=0; i<m; i++)
        {
            long long int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        if(v[m-1]==n || v[0]==1)
            cout<<"NO"<<endl;
        else
        {
            bool f = true;
            for(int i=0; i<m-2; i++)
            {
                long long int x;
                x = v[i];
                if(x+1==v[i+1] && x+2==v[i+2])
                {
                    f = false;
                    break;
                }
            }
            if(f==false)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
}
