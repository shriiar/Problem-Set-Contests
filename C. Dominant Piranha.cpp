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
        int n, y = 0, c = 0;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x>y)
                y = x;
            v.push_back(x);
        }
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==y)
                c++;
        }
        if(c==n)
            cout<<"-1"<<endl;
        else if(c==1)
        {
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]==y)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else
        {
            bool f = true;
            for(int i=0; i<v.size()-1; i++)
            {
                if(v[i]==y && v[i+1]!=y)
                {
                    f = false;
                    cout<<i+1<<endl;
                    break;
                }
            }
            if(f==true)
            {
                for(int i=v.size()-1; i>0; i--)
                {
                    if(v[i]==y && v[i-1]!=y)
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
    }
}
