#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <string> v;
    vector <string> t;
    for(int i=0; i<n; i++)
    {
        string x;
        cin >> x;
        if(x[0]!='!')
            v.push_back(x);
        else
        {
            string y = x.substr(1, x.size()-1);
            t.push_back(y);
        }
    }
    sort(v.begin(), v.end());
    sort(t.begin(), t.end());
    bool f = true, g;
    int z;
    for(int i=0; i<v.size(); i++)
    {
        g = binary_search(t.begin(), t.end(), v[i]);
        if(g==true)
        {
            z = (find(t.begin(), t.end(), v[i]) - t.begin());
            f = false;
            break;
        }
    }
    if(f==true)
        cout<<"satisfiable"<<endl;
    else
        cout<<t[z]<<endl;
}
