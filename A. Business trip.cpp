#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, n = 0;
    cin >> k;
    vector <int> v;
    for(int i=0; i<12; i++)
    {
        int x;
        cin >> x;
        n += x;
        v.push_back(x);
    }
    if(n<k)
        cout<<"-1"<<endl;
    else
    {
        sort(v.begin(), v.end());
        int s = 0, c = 0;
        for(int i=11; i>=0; i--)
        {
            if(s>=k)
                break;
            s += v[i];
            c++;
        }
        cout<<c<<endl;
    }
}
