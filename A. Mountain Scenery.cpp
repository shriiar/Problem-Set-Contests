#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int m = (2 * n) + 1;
    vector <int> v;
    v.push_back(0);
    for(int i=1; i<=m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=2; i<=m; i+=2)
    {
        if(v[i]-v[i-1]>1 && v[i]-v[i+1]>1 && k!=0)
        {
            v[i] -= 1;
            k--;
        }
    }
    for(int i=1; i<=m; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
