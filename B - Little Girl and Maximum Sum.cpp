#include <bits/stdc++.h>
using namespace std;
long long maxSumArrangement(int A[], int R[][2], int N, int M)
{
    long long count[N];
    memset(count, 0, sizeof count);
    for (int i = 0; i < M; ++i)
    {

        int l = R[i][0], r = R[i][1] + 1;
        l--;
        r--;
        count[l]++;
        if (r < N)
            count[r]--;
    }
    for (int i = 1; i < N; ++i)
    {
        count[i] += count[i - 1];
    }
    long long ans = 0;
    sort(count, count + N);
    sort(A, A + N);
    for (int i = N - 1; i >= 0; --i)
    {
        ans += A[i] * count[i];
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int v[n];
    int pr[m][2];
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[i] = val;
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        pr[i][0] = x;
        pr[i][1] = y;
    }
    int N = sizeof(v) / sizeof(v[0]);
    int M = sizeof(pr) / sizeof(pr[0]);

    cout << maxSumArrangement(v, pr, N, M);

    return 0;
}