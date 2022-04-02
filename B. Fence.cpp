#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(k==1)
        cout<<(min_element(v.begin(), v.end()) - v.begin()) + 1<<endl;
    else
    {
        vector <int> b;
        int a = 0, s = 0;
        for(int i=0; i<k; i++)
            s += v[i];
        b.push_back(s);
        for(int i=k; i<n; i++)
        {
            s = s - v[a] + v[i];
            b.push_back(s);
            a++;
        }
        cout<<(min_element(b.begin(), b.end()) - b.begin()) + 1<<endl;
    }
}
