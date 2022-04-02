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
        v.push_back(0);
        vector <bool> b((n*2)+1, 0);
        for(int i=1; i<=n*2; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i=1; i<v.size(); i++)
        {
            if(b[v[i]]==0)
            {
                cout<<v[i]<<" ";
                b[v[i]] = 1;
            }
        }
        cout<<endl;
    }
}
