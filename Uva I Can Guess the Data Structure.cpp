#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, x;
    while(cin >> n)
    {
        queue <int> q;
        stack <int> s;
        priority_queue <int> pq;
        bool bq = true, bs = true, bpq = true;
        while(n--)
        {
            cin >> c >> x;
            if(c==1)
            {
                q.push(x);
                s.push(x);
                pq.push(x);
            }
            else
            {
                if(bq==true)
                {
                    if(!q.empty() && q.front()==x)
                        q.pop();
                    else
                        bq = false;
                }
                if(bs==true)
                {
                    if(!s.empty() && s.top()==x)
                        s.pop();
                    else
                        bs = false;
                }
                if(bpq==true)
                {
                    if(!pq.empty() && pq.top()==x)
                        pq.pop();
                    else
                        bpq = false;
                }
            }
        }
        if(bq==true && bs==false && bpq==false)
            cout<<"queue"<<endl;
        else if(bq==false && bs==true && bpq==false)
            cout<<"stack"<<endl;
        else if(bq==false && bs==false && bpq==true)
            cout<<"priority queue"<<endl;
        else if(bq==false && bs==false && bpq==false)
            cout<<"impossible"<<endl;
        else
            cout<<"not sure"<<endl;
    }
}
