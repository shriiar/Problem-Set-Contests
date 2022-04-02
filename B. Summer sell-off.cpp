#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, f, k, l, x, c = 0;
    cin >> n >> f;
    vector <long long int> v;
    while(n--)
    {
        cin >> k >> l;
        c += min(k, l);
        if(min(k*2, l)-min(k, l)>0)
        {
            x = min(k*2, l) - min(k, l);
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end());
    for(int i=v.size()-1; i>=0 && f!=0; i--, f--)
        c += v[i];
    cout<<c<<endl;
}
