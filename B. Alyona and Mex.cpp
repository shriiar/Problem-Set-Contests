#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i=0, j=1; i<n; i++, j++)
    {
        if(j>v[i])
            j = v[i];
        v[i] = j;
    }
    cout<<v[n-1]+1<<endl;
}
