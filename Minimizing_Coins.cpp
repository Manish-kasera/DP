#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n, target;
    cin >> n >> target;

    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    vector <int> dp(target + 1, 1e9);
    dp[0] = 0;

    for (int i = 1; i <= target; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - c[j] >= 0)
            {
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
        }
    }

    if (dp[target] == 1e9)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << dp[target];
    }

    return 0;
}