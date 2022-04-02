#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector <int> v(26, 0);
    for(int i=0; i<26; i++)
        v[i] = i + 'a';
    while(m--)
    {
        char x, y;
        cin >> x >> y;
        for(int i=0; i<26; i++)
        {
            if(v[i]==x)
                v[i] = y;
            else if(v[i]==y)
                v[i] = x;
        }
    }
    for(int i=0; i<n; i++)
        s[i] = v[s[i] - 'a'];
    cout<<s<<endl;
}
