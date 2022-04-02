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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector <int> v;
        vector <int> z;
        for(int i=0; i<n; i++)
        {
            int x = s[i] - '0';
            v.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                int x = 1;
                z.push_back(x);
            }
            else
            {
                if(v[i]+1!=z[i-1]+v[i-1])
                {
                    int x = 1;
                    z.push_back(x);
                }
                else
                {
                    int x = 0;
                    z.push_back(x);
                }
            }
        }
        for(int i=0; i<n; i++)
            cout<<z[i];
        cout<<endl;
    }
}
