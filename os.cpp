// Page replacement - FIFO
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, capacity;
    cin >> n >> capacity;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
 
    set<int> s;
    queue<int> q;
    int fault_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.count(v[i]) == 0)
        {
            fault_cnt++;
            if (s.size() == capacity)
            {
                int first = q.front();
                q.pop();
                s.erase(first);
            }
            s.insert(v[i]);
        }
        q.push(v[i]);
    }
    cout << fault_cnt << endl;
    return 0;
}

// Page replacement - LRU
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, capacity;
    cin >> n >> capacity;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
 
    set<int> s;
    map<int, int> mp;
    int fault_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.count(v[i]) == 0)
        {
            fault_cnt++;
            if (s.size() == capacity)
            {
                int ind = INT_MAX, val;
                for (auto &j : s)
                {
                    if (mp[j] < ind)
                    {
                        ind = mp[j];
                        val = j;
                    }
                }
                s.erase(val);
            }
            s.insert(v[i]);
        }
        mp[v[i]] = i;
    }
    cout << fault_cnt << endl;
    return 0;
}

// Page replacement - Optimal
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, capacity;
    cin >> n >> capacity;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
 
    set<int> s;
    int fault_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.count(v[i]) == 0)
        {
            fault_cnt++;
            if (s.size() == capacity)
            {
                int ind = INT_MIN, val;
                for (auto &j : s)
                {
                    bool flag = false;
                    for (int k = i + 1; k < n; k++)
                    {
                        if (v[k] == j)
                        {
                            flag = true;
                            if (k > ind)
                            {
                                ind = k;
                                val = j;
                            }
                        }
                    }
                    if (!flag)
                    {
                        val = j;
                        break;
                    }
                }
                s.erase(val);
            }
            s.insert(v[i]);
        }
    }
    cout << fault_cnt << endl;
    return 0;
}

// Deadlock avoidance - Banker's algorithm
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> max(n, vector<int>(m)), alloc(n, vector<int>(m)), need(n, vector<int>(m));
    vector<int> work(m);
 
    for (auto &i : work)
        cin >> i;
    for (auto &i : max)
        for (auto &j : i)
            cin >> j;
    for (auto &i : alloc)
        for (auto &j : i)
            cin >> j;
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
 
    vector<bool> finish(n, false);
    vector<int> ans;
 
    while (ans.size() < n)
    {
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (!finish[i])
            {
                int j; 
                for (j = 0; j < m; j++)
                    if (work[j] < need[i][j])
                        break;
                if (j == m)
                {
                    for (int j = 0; j < m; j++)
                        work[j] += alloc[i][j];
                    ans.push_back(i);
                    finish[i] = true;
                    flag = true;
                }
            }
        }
        if (!flag)
            break;
    }
 
    if (ans.size() < n)
        cout << "Unsafe State!" << endl;
    else
    {
        cout << "Safe sequence: ";
        for (auto &i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}