#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, ss = 0;
    cin >> n;
    string s;
    cin >> s;
    if(n>26)
        cout<<"-1"<<endl;
    else
    {
        vector <int> v(26, 0);
        for(int i=0; i<s.size(); i++)
        {
            int x = s[i] - 'a';
            v[x]++;
        }
        long long int c = 0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]>1)
                c += (v[i]-1);
        }
        cout<<c<<endl;
    }
}
