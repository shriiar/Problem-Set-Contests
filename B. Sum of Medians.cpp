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
        long long n, k, s = 0, x = 0, c = 0;
        cin >> n >> k;
        int a= n/2;
        vector <long long int> v;
        for(int i=0; i<n*k; i++)
        {
            long long int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i=(n*k)-1; i>=0; i--, x++)
        {
            if(x==a)
            {
                s += v[i];
                x = -1;
                c++;
            }
            if(c==k)
                break;
        }
        cout<<s<<endl;
    }
}
