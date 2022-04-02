#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        vector <int>::iterator it;
        it = find(v.begin(), v.end(), x);
        if(it==v.end())
        {
            if(v.size()==k)
                v.erase(v.begin());
            v.push_back(x);
        }
    }
    cout<<v.size()<<endl;
    for(int i=v.size()-1; i>=0; i--)
        cout<<v[i]<<" ";
    cout<<endl;
}
