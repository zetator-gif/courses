// 10m - statement
// 10m - solution code kd_ac.cpp
// 3m - samples
// 2m = WA greedy_kd_wa.cpp
// 10m = TLE/MLE brute force kd_tle.cpp
// 5m - validator & validator tests
// 13m -stupid random generator, WA/TLE fixes, stress testing
#incluse <bits/stdc++.h>
using namespace std;

const long long INF = 1e18L + 5;
const int M = 100;

int main()  {
    int n;
    cin >> n;
    vector<int> a(n+2);
    a[0] = a[n+1] = 1000000007;
    for (int i = 1; i <= n; i++)    {
        cin >> a[i];
    }

    // dp[i][x] -- min sum so far with a[i] = x
    // x=0 means that we use a[i] from the input
    vector<long long> dp(M, INF);
    dp[0] = 0;
    for (int i = 1; i <= n + 1; i++)    {
        vector<long long> new_dp(M, INF);
        for (int prv = 0; prv < M; prv++)   {
            //dp[prv]
            for (int nxt = 0; nxt < M; nxt++)   {
                if (nxt == 0) == (a[i] == -1)   {}
            }
        }
    }
}