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
        string a, b;
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        vector <int> v;
        if(a.size()<b.size())
            swap(a, b);
        int x = 0, y = 0, s = 0, t = 0;
        int p = a.size() - b.size();
        for(int i=a.size()-1, j=b.size()-1; i>=0 && j>=0; i--, j--)
        {
            x = a[i] - '0';
            y = b[j] - '0';
            if(s+x+y>9)
            {
                s = s + x + y;
                int k = s % 10;
                v.push_back(k);
                s /= 10;
            }
            else
            {
                t = s + x + y;
                v.push_back(t);
                s = 0;
            }
        }
        if(p==0 && s!=0)
            v.push_back(s);
        else if(p!=0 && s==0)
        {
            for(int i=p-1; i>=0; i--)
            {
                x = a[i] - '0';
                v.push_back(x);
            }
        }
        else if(p!=0 && s!=0)
        {
            for(int i=p-1; i>=0; i--)
            {
                x = a[i] - '0';
                if(s+x>9)
                {
                    s = s + x;
                    int k = s % 10;
                    v.push_back(k);
                    s /= 10;
                }
                else
                {
                    t = s + x;
                    v.push_back(t);
                    s = 0;
                }
            }
            if(s>0)
                v.push_back(s);
        }
        bool f = true;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==0 && f==true)
                continue;
            else
            {
                cout<<v[i];
                f = false;
            }
        }
        cout<<endl;
        v.clear();
    }
}
