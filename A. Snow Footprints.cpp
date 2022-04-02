#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <char> v;
    v.push_back(0);
    for(int i=1; i<=n; i++)
    {
        char x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]=='R' && v[i+1]=='L')
            cout<<i<<" "<<i+1<<endl;
        else if(v[i]=='R' && v[i+1]=='.')
            cout<<i<<" "<<i+1<<endl;
        else if(v[i]=='.' && v[i+1]=='L')
            cout<<i+1<<" "<<i<<endl;
    }
}
M
