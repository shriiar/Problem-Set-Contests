#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector <long long> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector <long long> z;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            int x = abs(v[i]-v[i+1]);
            x /= 2;
            z.push_back(x);
        }
    }
    if(z.size()==0)
        cout<<"-1"<<endl;
    else
    {
        int y = z[0];
        if(z.size()>=2)
        {
            for(int i=1; i<z.size(); i++)
            {
                if(z[i]<y)
                    y = z[i];
            }
        }
        cout<<y<<endl;
    }
}
