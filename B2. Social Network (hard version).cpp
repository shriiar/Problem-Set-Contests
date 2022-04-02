#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    set <int> s;
    deque <int> q;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        if(s.find(x)==s.end())
        {
            if(s.size()==k)
            {
                int y = q.back();
                q.pop_back();
                s.erase(y);
            }
            s.insert(x);
            q.push_front(x);
        }
    }
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop_front();
    }
}
