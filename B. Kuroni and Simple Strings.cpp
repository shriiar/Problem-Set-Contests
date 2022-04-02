#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int j = s.size()-1;
    vector <int> v;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
        {
            for(; j>i; j--)
            {
                if(s[j]==')')
                {
                    v.push_back(i+1);
                    v.push_back(j+1);
                    j--;
                    break;
                }
            }
        }
        if(i==j)
            break;
    }
    sort(v.begin(), v.end());
    if(v.size()==0)
        cout<<0<<endl;
    else
    {
        cout<<1<<endl<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}
