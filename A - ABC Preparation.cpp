#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <int> v;
    for(int i=0; i<4; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout<<min_element(v.begin(),v.end())<<endl;
}
