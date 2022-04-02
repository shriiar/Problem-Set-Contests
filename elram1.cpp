#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    while (getline(cin, t))
    {
        if (t == "^D")
            break;
        s += t;
    }
    int res = 0, cnt = 0;
    vector<string> vs;
    vector<pair<int, int>> v;
    t.clear();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            vs.push_back(t);
            t.clear();
            v.push_back(make_pair(res, cnt));
            res = cnt + 1;
            cnt++;
            continue;
        }
        if (s[i] == ' ')
        {
            vs.push_back(t);
            t.clear();
            cnt++;
            continue;
        }
        t += s[i];
    }
    int rep = 0;
    for (int i = 0; i < vs.size(); i++)
    {
        int indx = vs[i].size() / 2;
        if (i >= v[rep].first && i <= v[rep].second)
        {
            if (vs[i].size() % 2 == 0)
            {
                cout << vs[i][0] << min(vs[i][indx], vs[i][indx - 1]) << vs[i][vs[i].size() - 1];
                continue;
            }
            cout << vs[i][0] << vs[i][indx] << vs[i][vs[i].size()-1];
        }
        else
        {
            cout<<endl;
            rep++;
            i--;
        }
    }
    return 0;
}