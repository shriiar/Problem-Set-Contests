#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m, k, t;
    cin >> n >> m >> k >> t;
    vector <pair <long long, long long>> v;
    while(k--)
    {
        int i, j;
        cin >> i >> j;
        v.push_back(make_pair(i, j));
    }
    sort(v.begin(), v.end());
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        long long x = lower_bound(v.begin(), v.end(), make_pair(a, b)) - v.begin();
        if(a==v[x].first && b==v[x].second)
        {
            cout<<"Waste"<<endl;
            continue;
        }
        else
        {
            long long y = ((a - 1) * m + b - x) % 3;
            if(y==0)
                cout<<"Grapes"<<endl;
            else if(y==1)
                cout<<"Carrots"<<endl;
            else
                cout<<"Kiwis"<<endl;
        }
    }
}
