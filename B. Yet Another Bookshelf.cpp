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
        int n, c = 0, d = 0, f = 0;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x==1)
                f++;
            v.push_back(x);
        }
        if(f>1)
        {
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]==1)
                {
                    c = i;
                    break;
                }
            }
            for(int i=v.size()-1; i>=0; i--)
            {
                if(v[i]==1)
                {
                    d = i;
                    break;
                }
            }
            int e = 0;
            for(int i=c+1; i<d; i++)
            {
                if(v[i]==0)
                    e++;
            }
            cout<<e<<endl;
        }
        else
            cout<<"0"<<endl;
        v.clear();
    }
}
