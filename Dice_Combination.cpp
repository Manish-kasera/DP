#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int mod = 1e9 + 7;

    int target;
    cin >> target;

    vector<int> dp(target + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= target; i++)
    {
        for (int j = 1; j <= 6 && i - j >= 0; j++)
        {
            (dp[i] += dp[i - j])%=mod;
        }

    }
    cout<<dp[target]<<endl;
    return 0;
}