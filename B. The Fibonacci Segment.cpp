#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, c = 0;
    cin >> n;
    if(n==1)
        cout<<"1"<<endl;
    else
    {
        vector <long long> v;
        for(int i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        int x = 0;
        for(int i=2; i<n; i++)
        {
            if(v[i]==v[i-1]+v[i-2])
                c++;
            else
                c = 0;
            if(c>x)
                x = c;
        }
        cout<<x+2<<endl;
    }
}
