#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
        sort(v.rbegin(), v.rend());
        long long z = v.size(), aa = 0, bb = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(v[i]%2==0)
                    aa += v[i];
            }
            else
            {
                if(v[i]%2!=0)
                    bb += v[i];
            }
        }
        if(aa>bb)
            cout<<"Alice"<<endl;
        else if(bb>aa)
            cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;
    }
}
