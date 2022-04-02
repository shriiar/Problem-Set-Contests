#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n, c = 0;
    cin >> n;
    vector <int> v;
    v.push_back(0);
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])
            c++;
        v.push_back(c);
    }
    while(n--)
    {
        int l, r, c = 0;
        cin >> l >> r;
        l -= 1, r -= 1;
        cout<<v[r]-v[l]<<endl;
    }
}
