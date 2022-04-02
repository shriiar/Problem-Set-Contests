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
        int n, c = 1;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            long long int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]!=v[i+1])
                c++;
        }
        cout<<c<<endl;
    }
}
