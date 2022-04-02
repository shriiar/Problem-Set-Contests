#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;
    for(int i=0; i<n; i++)
    {
        cout<<char('a'+i%b);
    }
}
