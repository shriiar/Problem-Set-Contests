#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    vector <long long> v;
    set <long long> s;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        s.insert(x);
        v.push_back(x);
    }
    long long x, y, c = 0, d = 0;
    x = *max_element(v.begin(), v.end());
    y = *min_element(v.begin(), v.end());
    cout<<x-y<<" ";
    if(s.size()==1)
        cout<<n*(n-1)/2<<endl;
    else
    {
        sort(v.begin(), v.end());
        x = v[0], y = v[n-1];
        for(int i=0; i<n; i++)
        {
            if(v[i]==x)
                c++;
            else
                break;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(v[i]==y)
                d++;
            else
                break;
        }
        cout<<c*d<<endl;
    }
}
