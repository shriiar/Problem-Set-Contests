#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int y = n;
    priority_queue <int> s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
        while(!s.empty() && s.top()==y)
        {
            cout<<s.top()<<" ";
            s.pop();
            y--;
        }
        cout<<endl;
    }
}
