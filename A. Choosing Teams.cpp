#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int c = 0;
    for(int i=0; i<v.size(); i++)
    {
        int y = v[i] + k;
        if(y<=5)
            c++;
    }
    cout<<c/3<<endl;
}
