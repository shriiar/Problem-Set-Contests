#include <bits/stdc++.h>
using namespace std;

int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, t;
    cin >> s >> t;
    int y1, y2, m1, m2, d1, d2;
    string x;
    x += s[0];
    x+= s[1];
    x+= s[2];
    x+= s[3];
    stringstream p(x);
    y1 = 0;
    p >> y1;

    x.clear();

    x += t[0];
    x+= t[1];
    x+= t[2];
    x+= t[3];
    stringstream q(x);
    y2 = 0;
    q >> y2;

    x.clear();

    x+= s[5];
    x+= s[6];
    stringstream r(x);
    m1 = 0;
    r >> m1;

    x.clear();

    x+= t[5];
    x+= t[6];
    stringstream ss(x);
    m2 = 0;
    ss >> m2;

    x.clear();

    x+= s[8];
    x+= s[9];
    stringstream tt(x);
    d1 = 0;
    tt >> d1;

    x.clear();

    x+= t[8];
    x+= t[9];
    stringstream u(x);
    d2 = 0;
    u >> d2;
    if(y1>y2)
    {
        swap(y1, y2);
        swap(m1, m2);
        swap(d1, d2);
    }
    int c = 0;
    vector <int> v(13, 0);
    v[1] = 31, v[2] = 28, v[3] = 31, v[4] = 30, v[5] = 31, v[6] = 30, v[7] = 31, v[8] = 31, v[9] = 30, v[10] = 31, v[11] = 30, v[12] = 31;
    int yc = y2 - y1, dc = 0, w = 0;
    if(yc==0)
    {
        if(yc==0 && m1>m2)
        {
            swap(m1, m2);
            swap(d1, d2);
        }
        if(m1==m2)
            cout<<d2-d1<<endl;
        else
        {
            for(int i=m1+1; i<m2; i++)
                dc += v[i];
            if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
                dc += (31-d1);
            else if(m1==2)
                dc += (28-d1);
            else
                dc += (30-d1);
            dc += d2;
            bool f = true;
            if (((y1 % 4 == 0) && (y1 % 100 != 0)) || (y1 % 400 == 0))
            {

                if(m1<=2 && (m2>=2 && d2>=28))
                    dc += 1;
            }
            if(m2==2 && d2==29)
                dc--;
            cout<<dc<<endl;
        }
    }
    else if(yc==1)
    {
        for(int i=m1+1; i<=12; i++)
            dc += v[i];
        for(int i=1; i<m2; i++)
            dc += v[i];
        if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
            dc += (31-d1);
        else if(m1==2)
            dc += (28-d1);
        else
            dc += (30-d1);
        dc += d2;
        bool f = true;
        if (((y1 % 4 == 0) && (y1 % 100 != 0)) || (y1 % 400 == 0))
        {
            if(m1<=2)
                dc += 1;
        }
        if (((y2 % 4 == 0) && (y2 % 100 != 0)) || (y2 % 400 == 0))
        {
            if((m2==2 && d2>=28) || (m2>=2))
                dc += 1;
        }
        if(m2==2 && d2==29)
            dc--;
        cout<<dc<<endl;
    }
    else
    {
        yc = y2 - y1 - 1;
        dc += yc * 365;
        for(int i=y1+1; i<y2; i++)
        {
            if(checkLeapYear(i))
                c++;
        }
        if (((y1 % 4 == 0) && (y1 % 100 != 0)) || (y1 % 400 == 0))
        {
            if(m1<=2)
                dc += 1;
        }
        if (((y2 % 4 == 0) && (y2 % 100 != 0)) || (y2 % 400 == 0))
        {
            if((m2==2 && d2>=28) || (m2>=2))
                dc += 1;
        }
        dc += c;
        for(int i=m1+1; i<=12; i++)
            dc += v[i];
        for(int i=1; i<m2; i++)
            dc += v[i];
        if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
            dc += (31-d1);
        else if(m1==2)
            dc += (28-d1);
        else
            dc += (30-d1);
        dc += d2;
        cout<<dc<<endl;
    }
}
