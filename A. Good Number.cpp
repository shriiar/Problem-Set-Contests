#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, c = 0;
    cin >> n >> k;
    while(n--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        vector <char> v(10, 0);
        for(int i=0; i<s.size(); i++)
        {
            int x = s[i] - '0';
            v[x]++;
        }
        bool f = true;
        for(int i=0; i<=k; i++)
        {
            if(v[i]==0)
            {
                f = false;
                break;
            }
        }
        if(f==true)
            c++;
    }
    cout<<c<<endl;
}
