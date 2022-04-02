#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int h, m;
        cin >> h >> m;
        cout<<(1440-((h*60)+m))<<endl;
    }
}
