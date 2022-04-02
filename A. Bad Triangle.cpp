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
        if(v[0]+v[1] <= v[n-1])
            cout<<"1 2 "<<n<<endl;
        else
            cout<<"-1"<<endl;
    }
}
