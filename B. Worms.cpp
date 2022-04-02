#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector <int> b;
    int x = v[0];
    b.push_back(x);
    for(int i=1; i<n; i++)
    {
        x += v[i];
        b.push_back(x);
    }
    int y;
    cin >> y;
    while(y--)
    {
        int z;
        cin >> z;
        cout<<(lower_bound(b.begin(), b.end(), z))-b.begin()+1<<endl;

    }
}
