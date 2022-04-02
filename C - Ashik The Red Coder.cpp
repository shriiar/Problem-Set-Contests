#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n;
        x = n;
        vector <int> v(26, 0);
        while(x--)
        {
            string s;
            cin >> s;
            for(int i=0; i<s.size(); i++)
            {
                int x = s[i] - 'a';
                v[x]++;
            }
        }
        bool f = true;
        for(int i=0; i<26; i++)
        {
            if((v[i]%n!=0 || v[i]<n) && v[i]!=0)
            {
                f = false;
                break;
            }
        }
        if(f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
