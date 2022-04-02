#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, o = 0, e = 0, s = 0;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x%2==0)
            e++;
        else
        {
            o++;
            v.push_back(x);
        }
        s += x;
    }
    if(e>=1 && o==0)
        cout<<"0"<<endl;
    else
    {
        if(s%2!=0)
            cout<<s<<endl;
        else
        {
            s -= *min_element(v.begin(), v.end());
            cout<<s<<endl;
        }
    }
}
