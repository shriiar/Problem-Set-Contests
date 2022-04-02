#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            long long int x;
            cin >> x;
            v.push_back(x);
        }
        bool f = true;
        sort(v.begin(), v.end());
        for(int i=0; i<n-1; i++)
        {
            if(v[i]==v[i+1])
            {
                f = false;
                break;
            }
        }
        if(f==true)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
