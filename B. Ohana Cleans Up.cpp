#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector <string> v;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int c = 0;
    vector <int> b;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[i]==v[j])
                c++;
        }
        b.push_back(c);
        c = 0;
    }
    cout<<*max_element(b.begin(), b.end())<<endl;
}
