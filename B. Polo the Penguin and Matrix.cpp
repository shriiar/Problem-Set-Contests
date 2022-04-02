#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, d;
    bool f = true;
    cin >> n >> m >> d;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end());
    for(int i=1; i<v.size(); i++)
    {
        if((v[i]-v[i-1])%d!=0)
        {
            f = false;
            break;
        }
    }
    if(f==false)
        cout<<"-1"<<endl;
    else
    {
        long long s = 0;
        int y = (v.size() - 1)/2;;
        for(int i=0; i<v.size(); i++)
            s += (abs(v[i]-v[y])) / d;
        cout<<s<<endl;
    }
}
