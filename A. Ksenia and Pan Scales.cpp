#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;

    if(s.size()==1)
    {
        if(t.size()%2==0)
        {
            for(int i=0; i<t.size()/2; i++)
                cout<<t[i];
            cout<<s[0];
            for(int i=t.size()/2; i<t.size(); i++)
                cout<<t[i];
            cout<<endl;
        }
        else
            cout<<"Impossible"<<endl;
    }
    else
    {
        int x=0, y=0, z=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='|')
                x++;
            else
            {
                z = i;
                break;
            }
        }
        for(int i=z+1; i<s.size(); i++)
            y++;
        int e = t.size();
        if(x==0 && y!=0)
        {
            if(s.size()-1>t.size())
                cout<<"Impossible"<<endl;
            else
            {
                int b = t.size();
                int w = abs(b - y);
                if(w%2==0)
                {
                    int p;
                    for(int i=0; i<y; i++)
                    {
                        cout<<t[i];
                        p = i;
                        e--;
                    }
                    int q;
                    if(e!=0)
                    {

                        for(int i=p+1, j=0; j<w/2; i++, j++)
                        {
                            q = i;
                            cout<<t[i];
                            e--;
                        }
                    }
                    for(int i=0; i<s.size(); i++)
                        cout<<s[i];
                    if(e!=0)
                    {
                        for(int i=q+1; i<t.size(); i++)
                            cout<<t[i];
                    }
                    cout<<endl;
                }
            }
        }
        else if(x!=0 && y==0)
        {
            int b = t.size();
            int w = abs(b - x);
            int e = t.size();
            if(w%2==0)
            {
                if(s.size()-1==t.size())
                {
                    for(int i=0; i<s.size(); i++)
                        cout<<s[i];
                    for(int i=0; i<t.size(); i++)
                        cout<<t[i];
                    cout<<endl;
                }
                else if(s.size()-1<t.size())
                {
                    int q;
                    vector <char> r;
                    for(int i=0; i<s.size(); i++)
                    {
                        if(s[i]!='|')
                            r.push_back(s[i]);
                        else
                        {
                            q = i;
                            break;
                        }
                    }
                    int o = t.size() - 1;
                    int l = abs(x - o);
                    int p;
                    for(int i=0; i<l; i++)
                    {
                        r.push_back(t[i]);
                        p = i;
                        e--;
                    }
                    r.push_back(s[q]);
                    if(e!=0)
                    {
                        for(int i=p+1; i<t.size(); i++)
                            r.push_back(t[i]);
                    }
                    int n;
                    for(int i=0; i<r.size(); i++)
                    {
                        if(r[i]=='|')
                        {
                            n = i;
                            break;
                        }
                    }
                    int c = 0, d = 0;
                    for(int i=0; i<n; i++)
                        c++;
                    for(int i=n+1; i<r.size(); i++)
                        d++;
                    if(c==d)
                    {
                        for(int i=0; i<r.size(); i++)
                            cout<<r[i];
                        cout<<endl;
                    }
                    else
                        cout<<"Impossible"<<endl;
                }
                else
                    cout<<"Impossible"<<endl;
            }
        }
        else if(x!=0 && y!=0)
        {
            if(x>y)
            {
                int q;
                vector <char> r;
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]!='|')
                        r.push_back(s[i]);
                    else
                    {
                        q = i;
                        break;
                    }
                }
                vector <char> u;
                int e = t.size();
                int l = x - y;
                int n;
                for(int i=q+1; i<s.size(); i++)
                    u.push_back(s[i]);
                for(int i=0; i<l; i++)
                {
                    u.push_back(t[i]);
                    n = i;
                    e--;
                }
                int w = e;
                int p;
                if(w%2==0)
                {
                    if(e!=0)
                    {

                        for(int i=n+1, j=0; j<w/2; i++, j++)
                        {
                            u.push_back(t[i]);
                            p = i;
                            e--;
                        }
                    }
                    for(int i=p+1, j=0; j<w/2; i++, j++)
                        r.push_back(t[i]);
                    r.push_back(s[q]);
                    bool f = true;
                    for(int i=0; i<u.size(); i++)
                    {
                        if(u[i]>='A' && u[i]<='Z')
                            continue;
                        else
                        {
                            f = false;
                            break;
                        }
                    }
                    if(u.size()==r.size()-1 && f==true)
                    {
                        for(int i=0; i<r.size(); i++)
                            cout<<r[i];
                        for(int i=0; i<u.size(); i++)
                            cout<<u[i];
                        cout<<endl;
                    }
                    else
                        cout<<"Impossible"<<endl;
                }
                else
                    cout<<"Impossible"<<endl;
            }
            else if(x<y)
            {
                int e = t.size();
                vector <char> r;
                int q;
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]!='|')
                        r.push_back(s[i]);
                    else
                    {
                        q = i;
                        break;
                    }
                }
                int p;
                int l = y - x;
                for(int i=0, j=0; j<l; i++, j++)
                {
                    r.push_back(t[i]);
                    p = i;
                    e--;
                }
                int w = e;
                if(w%2==0)
                {
                    int n;
                    for(int i=p+1, j=0; j<w/2; i++, j++)
                    {
                        r.push_back(t[i]);
                        n = i;
                        e--;
                    }
                    r.push_back(s[q]);
                    for(int i=q+1; i<s.size(); i++)
                        r.push_back(s[i]);
                    if(e!=0)
                    {
                        for(int i=n+1; i<t.size(); i++)
                            r.push_back(t[i]);
                    }
                    bool f = true;
                    int m;
                    for(int i=0; i<r.size(); i++)
                    {
                        if(r[i]=='|')
                            m = i;
                    }
                    for(int i=0; i<m; i++)
                    {
                        if(r[i]>='A' && r[i]<='Z')
                            continue;
                        else
                        {
                            f = false;
                            break;
                        }
                    }
                    if(f==true)
                    {
                        for(int i=0; i<r.size(); i++)
                            cout<<r[i];
                        cout<<endl;
                    }
                    else
                        cout<<"Impossible"<<endl;
                }
                else
                    cout<<"Impossible"<<endl;
            }
            else if(x==y)
            {
                if(t.size()%2==0)
                {
                    int q;
                    vector <char> r;
                    for(int i=0; i<s.size(); i++)
                    {
                        if(s[i]!='|')
                            r.push_back(s[i]);
                        else
                        {
                            q = i;
                            break;
                        }
                    }
                    int p = t.size() / 2;
                    for(int i=0; i<p; i++)
                        r.push_back(t[i]);
                    r.push_back(s[q]);
                    for(int i=q+1; i<s.size(); i++)
                        r.push_back(s[i]);
                    for(int i=p; i<t.size(); i++)
                        r.push_back(t[i]);
                    int n;
                    for(int i=0; i<r.size(); i++)
                    {
                        if(r[i]=='|')
                        {
                            n = i;
                            break;
                        }
                    }
                    for(int i=0; i<r.size(); i++)
                        cout<<r[i];
                    cout<<endl;
                }
                else
                    cout<<"Impossible"<<endl;
            }
        }
    }
}

