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
        long long n, x, c;
        bool f = true;
        cin >> n;
        vector <long long> v;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>i)
            {
                c = v[i] - i;
                v[i] = i;
                v[i+1] += c;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>=v[i+1])
            {
                f = false;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
}
